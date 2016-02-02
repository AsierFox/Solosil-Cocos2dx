#include "Level1.h"

USING_NS_CC;

const std::string Level1::LEVEL_NAME = "testlevel.tmx";

Level1::Level1(std::string LEVEL_NAME)
	: BaseLevel(LEVEL_NAME)
{}

void Level1::load() {
	levelMap->setPosition(0, 0);
	actualLayer->addChild(levelMap);
}

void Level1::input(float delta) {
}

void Level1::update(float delta) {
}

void Level1::draw() {
}

void Level1::cleanup() {
}
