#include "LevelManager.h"

USING_NS_CC;

void LevelManager::loadLevel() {
	level->load();
}

void LevelManager::setLevelLayer(Layer* layer) {
	level->setActualLayer(layer);
}

void LevelManager::input(float delta) {
	level->input(delta);
}

void LevelManager::update(float delta) {
	level->update(delta);
}

void LevelManager::draw() {
	level->draw();
}

void LevelManager::setLevel(BaseLevel* level) {
	this->level = level;
}

void LevelManager::switchLevel(BaseLevel* level) {
	this->level = level;
}

BaseLevel* LevelManager::getLevel() const {
	return level;
}
