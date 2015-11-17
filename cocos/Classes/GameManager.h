#pragma once
#ifndef __GAMEMANAGER_H__
#define __GAMEMANAGER_H__

#include "cocos2d.h"

class GameManager
{
private:
	int _score;
	int _numOfElfs;
	float _speed;
public:
	GameManager();
	~GameManager();

	int GetScore();
	void AddToScore(int increment);
	void ResetScore();

	void SetNumOfElfs(int numOfElfs);

	void SetSpeed(float newSpeed);
};

#endif // __GAMEMANAGER_H__