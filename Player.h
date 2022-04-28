#pragma once
#include <string>

//creating the player class
class Player 
{
private:
	std::string player_name;

public:
	// this will create the player name
	void set_name(std::string& name) {
		player_name = name;
	}

	// when call return the player name
	std::string get_name() {
		return player_name;
	}
};