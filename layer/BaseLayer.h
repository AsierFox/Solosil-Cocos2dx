#ifndef __BASE_LAYER_H__
#define __BASE_LAYER_H__

#include "cocos2d.h"

#include "../manager/AudioManager.h"

class BaseLayer : public cocos2d::Layer {
protected:
	AudioManager audioManager;
	float elapsedTime;

public:
	virtual bool init() = 0;
	virtual void onEnter() = 0;
	void update(float) override = 0;
	virtual void onExit() = 0;
	virtual void cleanup() = 0;
};

#endif // __BASE_LAYER_H__
