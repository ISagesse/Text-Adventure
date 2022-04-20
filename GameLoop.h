#pragma once
#include "Player.h"
#include "PlayerOptions.h"

namespace GameLoop {
	void welcome_player(Player& player);
	void give_player_options();
	void get_player_input(std::string& player_option);
	player_options evaluate_inputs(std::string& player_option);
	bool run_game();
}