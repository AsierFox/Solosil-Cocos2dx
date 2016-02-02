#include "SplashLayer.h"

USING_NS_CC;

bool SplashLayer::init() {
    if (!Layer::init()) {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
	elapsedTime = .0f;

#ifndef NDEBUG
	// If debug skip splash scene
	sceneTimeLength = 0;
#else
	sceneTimeLength = 3;
#endif // !NDEBUG

	// Sound effect
	audioManager.setEffect("splash_audio.mp3");

	// Solosil sprite
	solosilSprite = Sprite::create("img/solosil.png");
	solosilSprite->setPosition(visibleSize.height / 2, visibleSize.width / 2);
	addChild(solosilSprite);

	scheduleUpdate();
	return true;
}

void SplashLayer::onEnter() {
	Layer::onEnter();

	// init sound
	audioManager.playEffect("splash_audio.mp3");
}

void SplashLayer::update(float delta) {
	// Solosil sprite animation
	Vector<FiniteTimeAction*> actions;
	actions.pushBack(ScaleTo::create(1.5, 1.5));
	actions.pushBack(FadeTo::create(4, 20));
	solosilSprite->runAction(Sequence::create(actions));
	
	elapsedTime += delta;
	
	if (elapsedTime >= sceneTimeLength) {
		Director::getInstance()->replaceScene(MainMenuLayer::createScene());
	}
}

void SplashLayer::onExit() {
	Layer::onExit();
}

void SplashLayer::cleanup() {
	solosilSprite->cleanup();

	BaseLayer::cleanup();
}

Scene* SplashLayer::createScene() {
	Scene* scene = Scene::create();
	SplashLayer* layer = SplashLayer::create();

	scene->addChild(layer);

	return scene;
}
