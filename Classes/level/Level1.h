#ifndef __LEVEL_1_H__
#define __LEVEL_1_H__

#include "cocos2d.h"

#include "BaseLevel.h"

class Level1 : public BaseLevel{

public:
	static const std::string LEVEL_NAME;

	Level1(const std::string LEVEL_NAME);

	virtual void load();
	virtual void input(float delta);
	virtual void update(float delta);
	virtual void draw();
	virtual void cleanup();

};

#endif // __LEVEL_1_H__
