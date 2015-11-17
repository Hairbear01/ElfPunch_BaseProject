#pragma once
#ifndef __GAMEMANAGER_H__
#define __GAMEMANAGER_H__

#include "cocos2d.h"

class GameManager
{
private:
	int _score;
	int _numOfElfs; // number of times the elfs will poke up
	float _speed;
public:
	GameManager();
	~GameManager();

	// Scoring
	//======================================================================
	int GetScore();
	void AddToScore(int increment);
	void ResetScore();

	// Elves
	//======================================================================
	void SetNumOfElfs(int numOfElfs);
	int GetNumOfElfs();

	// Speed
	//======================================================================
	void SetSpeed(float newSpeed);
	float GetSpeed();
};

#endif // __GAMEMANAGER_H__