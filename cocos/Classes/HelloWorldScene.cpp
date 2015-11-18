#include "HelloWorldScene.h"
#include "Game.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto rootNode = CSLoader::createNode("MainScene.csb");
    addChild(rootNode);

	_begin = (ui::Button*)rootNode->getChildByName("BEGIN");
	_settings = (ui::Button*)rootNode->getChildByName("SETTINGS");
	_credits = (ui::Button*)rootNode->getChildByName("CREDITS");
	_exit = (ui::Button*)rootNode->getChildByName("EXIT");

	_begin->addTouchEventListener(CC_CALLBACK_2(HelloWorld::BeginButtonPressed, this));
	_settings->addTouchEventListener(CC_CALLBACK_2(HelloWorld::SettingsButtonPressed, this));
	_credits->addTouchEventListener(CC_CALLBACK_2(HelloWorld::CreditsButtonPressed, this));
	_exit->addTouchEventListener(CC_CALLBACK_2(HelloWorld::ExitButtonPressed, this));

    return true;
}

void HelloWorld::BeginButtonPressed(Ref* sender, cocos2d::ui::Widget::TouchEventType type)
{
	Game* nextScene = new Game(_gameManager);
	CCDirector::getInstance()->replaceScene(nextScene->GetScene());
}

void HelloWorld::SettingsButtonPressed(Ref* sender, cocos2d::ui::Widget::TouchEventType type)
{
}

void HelloWorld::CreditsButtonPressed(Ref* sender, cocos2d::ui::Widget::TouchEventType type)
{
}

void HelloWorld::ExitButtonPressed(Ref* sender, cocos2d::ui::Widget::TouchEventType type)
{
}