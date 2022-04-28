#include "Game.h"
#include <iostream>

using namespace std;

// welcome the player to our game.
void Game::welcome_player() {
	cout << "Welcome to the Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	cout << "Player Name: ";
	string name;
	cin >> name;
	player.set_name(name);

	cout << endl << "Hello " << player.get_name() << endl;
}

// this function ask and display all the available option the player can choose.
void Game::give_player_option() {
	cout << "What would you like to do?" << endl;
	cout << endl << "1: Quit" << endl << endl;
}

// this function get the player choice.
void Game::get_player_input(string& player_option) {
	cin >> player_option;
}

// this function will evaluate the player input against all our class enum of opions available.
PlayerOptions Game::evaluate_input(string& player_option) {
	PlayerOptions player_choice = PlayerOptions::None;

	if (player_option.compare("1") == 0) {
		cout << "Good Bye!!!" << endl << endl;
		player_choice = PlayerOptions::Quit;
	}
	else {
		cout << "I do not recognise that option, please try again!" << endl << endl;
	}

	return player_choice;
}

void Game::run_game() {

	welcome_player();

	//decide if we should end the game
	bool end_game = false;
	while (end_game == false)
	{
		Game::give_player_option();

		string player_choice;
		get_player_input(player_choice);

		//check to see if the player has chosen to end the game. if it is change endgame = true
		end_game = Game::evaluate_input(player_choice) == PlayerOptions::Quit;
	}
}