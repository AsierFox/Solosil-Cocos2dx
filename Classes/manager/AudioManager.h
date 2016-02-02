#ifndef  _AUDIO_MANAGER_H_
#define  _AUDIO_MANAGER_H_

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

class AudioManager {

	static const std::string SOUND_DIR;

	CocosDenshion::SimpleAudioEngine* audioEngine;

	std::string bgMusic;
	std::vector<std::string> effects;

public:
	AudioManager();
	~AudioManager();

	void playBgMusic();
	void playEffect(std::string effect);

	void setBgMusic(std::string bgMusic);
	void setEffect(std::string effect);
};

#endif // _AUDIO_MANAGER_H_
