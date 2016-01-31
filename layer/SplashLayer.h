#ifndef __SPLASH_LAYER_H__
#define __SPLASH_LAYER_H__

#include "cocos2d.h"

#include "BaseLayer.h"
#include "MainMenuLayer.h"

class SplashLayer : public BaseLayer {

	cocos2d::Sprite* solosilSprite;

	int sceneTimeLength;

public:

    virtual bool init();
	virtual void onEnter();
	void update(float) override;
	virtual void onExit();
	virtual void cleanup();

	static cocos2d::Scene* createScene();

    // implement the "static create()" method manually
    CREATE_FUNC(SplashLayer);
};

#endif // __SPLASH_LAYER_H__
