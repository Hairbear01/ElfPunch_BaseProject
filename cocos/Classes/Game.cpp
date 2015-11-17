#include "Game.h"


Game::Game()
{
	_running = false;
	_paused = false;
	StartGame();
}


Game::~Game()
{
}

void Game::StartGame()
{
	Sleep(3000); // give a countdown to the game beginning
	_running = true;
}

void Game::update(float deltaTime)
{
	if (_running)
	{
		// Update the game
	}
}