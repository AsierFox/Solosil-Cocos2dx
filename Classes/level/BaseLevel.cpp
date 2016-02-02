#include "BaseLevel.h"

USING_NS_CC;

const std::string BaseLevel::MAP_DIR = "img/map/";

BaseLevel::BaseLevel(const std::string LEVEL_NAME) {
	// Load tiled map
	this->levelPath = MAP_DIR + LEVEL_NAME;
	levelMap = TMXTiledMap::create(levelPath);
}

void BaseLevel::cleanup() {
	levelMap->cleanup();
	//delete actualScene; TODO
}

void BaseLevel::setActualLayer(Layer* layer) {
	actualLayer = layer;
}

TMXTiledMap* BaseLevel::getLevelMap() {
	return levelMap;
}
