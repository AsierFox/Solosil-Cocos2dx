#ifndef __LEVEL_MANAGER_H__
#define __LEVEL_MANAGER_H__

#include <vector>

#include "cocos2d.h"

#include "../level/BaseLevel.h"

class LevelManager {

	BaseLevel* level;
	
public:

	void loadLevel();

	void input(float delta);
	void update(float delta);
	void draw();

	void setLevel(BaseLevel* level);
	BaseLevel* getLevel() const;
	void switchLevel(BaseLevel* level);
	void setLevelLayer(cocos2d::Layer* layer);
};

#endif // __LEVEL_MANAGER_H__
