#pragma once
#include "Player.h"
#include "PlayerOptions.h"

class Game {
private:
	Player player;

	void welcome_player();
	void give_player_option();
	void get_player_input(std::string &player_input);
	PlayerOptions evaluate_input(std::string& player_input);

public:
	void run_game();
};