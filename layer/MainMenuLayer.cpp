#include "MainMenuLayer.h"

USING_NS_CC;

bool MainMenuLayer::init() {
	if (!Layer::init()) {
		return false;
	}
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	audioManager.setBgMusic("splash_audio.mp3");
	elapsedTime = .0f;


	scheduleUpdate();
	return true;
}

void MainMenuLayer::onEnter() {
	Layer::onEnter();


}

void MainMenuLayer::update(float delta) {

	elapsedTime += delta;
}

void MainMenuLayer::onExit() {
	Layer::onExit();
}

void MainMenuLayer::cleanup() {
	Layer::cleanup();
}

void MainMenuLayer::menuCloseCallback(Ref* pSender) {
	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}

Scene* MainMenuLayer::createScene() {
	auto scene = Scene::create();
	auto layer = MainMenuLayer::create();

	scene->addChild(layer);

	return scene;
}
