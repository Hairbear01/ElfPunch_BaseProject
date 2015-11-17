#include "Game.h"


Game::Game()
{
	_running = false;
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
		for (int i = 0; i < ELF_NUMBER; i++)
		{
			if (_elfs[i]->_isAlive)
			{
				_elfs[i]->ElfUpdate(deltaTime);
			}
			/*else
			{
				// in this part we will test the probability
				// of the elf waking up. Then call "elf[i]->GetUp();"
				// no need to set the elf's alive state here
			}*/
		}
	}
}