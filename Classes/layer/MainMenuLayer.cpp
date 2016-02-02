#include "MainMenuLayer.h"

USING_NS_CC;

bool MainMenuLayer::init() {
	if (!Layer::init()) {
		return false;
	}
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	elapsedTime = .0f;

	// Menu
	const float marginLeft = 0;
	const float heightCenter = visibleSize.height * .5;
	Vector<MenuItem*> menuItems;

	MenuItem* playItem = MenuItemFont::create("Play",
		CC_CALLBACK_1(MainMenuLayer::playCallback, this));
	playItem->setPosition(marginLeft, heightCenter * .75f);
	menuItems.pushBack(playItem);

	MenuItem* settingsItem = MenuItemFont::create("Settings");
	settingsItem->setPosition(marginLeft, heightCenter * .5f);
	menuItems.pushBack(settingsItem);

	MenuItem* exitItem = MenuItemFont::create("Exit",
		CC_CALLBACK_1(MainMenuLayer::closeCallback, this));
	exitItem->setPosition(marginLeft, heightCenter * .25f);
	menuItems.pushBack(exitItem);

	addChild(Menu::createWithArray(menuItems));

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
	BaseLayer::cleanup();
}

void MainMenuLayer::playCallback(Ref* pSender) {
	Director::getInstance()->replaceScene(PlayLayer::createScene());
}

void MainMenuLayer::closeCallback(Ref* pSender) {
	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}

Scene* MainMenuLayer::createScene() {
	Scene* scene = Scene::create();
	MainMenuLayer* layer = MainMenuLayer::create();

	scene->addChild(layer);

	return scene;
}
