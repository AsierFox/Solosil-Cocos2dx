#ifndef __PLAY_LAYER_H__
#define __PLAY_LAYER_H__

#include "cocos2d.h"

#include "BaseLayer.h"

#include "../manager/LevelManager.h"

#include "../level/BaseLevel.h"
#include "../level/Level1.h"

class PlayLayer : public BaseLayer {

	LevelManager levelManager;

public:

	virtual bool init();
	virtual void onEnter();
	void update(float) override;
	virtual void onExit();
	virtual void cleanup();

	static cocos2d::Scene* createScene();
	
	// implement the "static create()" method manually
	CREATE_FUNC(PlayLayer);
};

#endif // __PLAY_LAYER_H__
