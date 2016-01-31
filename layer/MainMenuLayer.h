#ifndef  __MAIN_MENU_LAYER_H__
#define  __MAIN_MENU_LAYER_H__

#include "cocos2d.h"

#include "BaseLayer.h"

class MainMenuLayer : public BaseLayer {

public:

	virtual bool init();
	virtual void onEnter();
	void update(float) override;
	virtual void onExit();
	virtual void cleanup();

	void menuCloseCallback(cocos2d::Ref* pSender);

	static cocos2d::Scene* createScene();

	// implement the "static create()" method manually
	CREATE_FUNC(MainMenuLayer);
};

#endif // __MAIN_MENU_LAYER_H__
