#ifndef __BASE_LEVEL_H__
#define __BASE_LEVEL_H__

#include "cocos2d.h"

class BaseLevel {
protected:
	static const std::string MAP_DIR;

	std::string levelPath;
	cocos2d::TMXTiledMap* levelMap;

	cocos2d::Layer* actualLayer;

public:

	BaseLevel(const std::string LEVEL_NAME);

	virtual void load() = 0;
	virtual void input(float delta) = 0;
	virtual void update(float delta) = 0;
	virtual void draw() = 0;
	virtual void cleanup();

	void setActualLayer(cocos2d::Layer* layer);
	cocos2d::TMXTiledMap* getLevelMap();
};

#endif // __BASE_LEVEL_H__
