#pragma once
#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include <cocos2d.h>
#include "GameManager.h"
#include "Elf.h"

using namespace std;

#define ELF_NUMBER 11

class Game
{
private:
	GameManager* _gameManager;
	Elf* _elfs[ELF_NUMBER]; // one for each hole in the game board
	int _numOfElfs; // number of times the elfs will poke up
	float _speed;
	bool _running;
public:
	Game();
	~Game();

	void StartGame();

	void update(float deltaTime);
};

#endif