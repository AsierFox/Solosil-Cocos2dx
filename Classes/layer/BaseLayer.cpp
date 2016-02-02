#include "BaseLayer.h"

USING_NS_CC;

BaseLayer::BaseLayer() {
}

BaseLayer::~BaseLayer() {
	this->cleanup();
}

void BaseLayer::cleanup() {
	audioManager.~AudioManager();

	Layer::cleanup();
}
