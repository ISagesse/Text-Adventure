#pragma once
#include <string>

//creating the player class
class Player 
{
private:
	std::string player_name;

public:
	//creating the player constructo
	Player(std::string name) {
		player_name = name;
	}

	// this will create the player name
	void set_name(std::string& name) {
		player_name = name;
	}

	// when call return the player name
	string& get_name() {
		return player_name;
	}
};