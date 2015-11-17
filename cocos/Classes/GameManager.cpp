#include "GameManager.h"


GameManager::GameManager()
{
	//Default Setting
	_score = 0;
	_numOfElfs = 50;
	_speed = 30.0f;
}


GameManager::~GameManager()
{
}

int GameManager::GetScore()
{
	return _score;
}

void GameManager::AddToScore(int increment)
{
	_score += increment;
}

void GameManager::ResetScore()
{
	_score = 0;
}

void GameManager::SetNumOfElfs(int numOfElfs)
{
	_numOfElfs = numOfElfs;
}

void GameManager::SetSpeed(float newSpeed)
{
	_speed = newSpeed;
}