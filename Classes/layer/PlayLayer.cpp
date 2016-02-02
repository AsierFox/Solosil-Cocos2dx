#include "PlayLayer.h"

USING_NS_CC;

bool PlayLayer::init() {
	if (!Layer::init()) {
		return false;
	}
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	elapsedTime = .0f;

	// Load level manager
	levelManager.setLevel(new Level1(Level1::LEVEL_NAME));
	levelManager.setLevelLayer(this);
	levelManager.loadLevel();

	scheduleUpdate();
	return true;
}

void PlayLayer::onEnter() {
	Layer::onEnter();
}

void PlayLayer::update(float delta) {

	levelManager.input(delta);
	levelManager.update(delta);
	levelManager.draw();
	
	elapsedTime += delta;
}

void PlayLayer::onExit() {
	Layer::onExit();
}

void PlayLayer::cleanup() {
	BaseLayer::cleanup();
}

Scene* PlayLayer::createScene() {
	Scene* scene = Scene::create();
	PlayLayer* layer = PlayLayer::create();

	scene->addChild(layer);

	return scene;
}
