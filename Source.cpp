#include "Player.h"
#include "GameLoop.h"

int main() {
	
	Player player;
	GameLoop::welcome_player(player);

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = GameLoop::run_game();
	}

	return 0;
}