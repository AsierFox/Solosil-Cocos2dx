#include "AudioManager.h"

USING_NS_CC;

const std::string AudioManager::SOUND_DIR = "sound/";

AudioManager::AudioManager() {
	audioEngine = CocosDenshion::SimpleAudioEngine::getInstance();
}

AudioManager::~AudioManager() {
	audioEngine->end();
}

void AudioManager::playBgMusic() {
	audioEngine->playBackgroundMusic(this->bgMusic.c_str(), true);
}

void AudioManager::playEffect(std::string effect) {
	audioEngine->playEffect((SOUND_DIR + effect).c_str());
}

void AudioManager::setBgMusic(std::string bgMusic) {
	this->bgMusic = SOUND_DIR + bgMusic;
	audioEngine->preloadBackgroundMusic(this->bgMusic.c_str());
}

void AudioManager::setEffect(std::string effect) {
	effects.push_back(SOUND_DIR + effect);
	audioEngine->preloadEffect(effects.back().c_str());
}
