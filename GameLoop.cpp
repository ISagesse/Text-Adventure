#include "GameLoop.h"
#include <iostream>

using namespace std;

namespace GameLoop
{
	// welcome the player to our game.
	void welcome_player(Player& player) {
		cout << "Welcome to the Text Adventure!" << endl << endl;
		cout << "What is your name?" << endl << endl;

		cout << "Player Name: ";
		string name;
		cin >> name;
		player.set_name(name);

		cout << endl << "Hello " << player.get_name() << endl;
	}

	// this function ask and display all the available option the player can choose.
	void give_player_options() {
		cout << "What would you like to do?" << endl;
		cout << endl << "1: Quit" << endl << endl;
	}

	// this function get the player choice.
	void get_player_input(string& player_option) {
		cin >> player_option;
	}

	// this function will evaluate the player input against all our class enum of opions available.
	player_options evaluate_inputs(string& player_option) {
		player_options player_choice = player_options::None;

		if (player_option.compare("1") == 0) {
			cout << "Good Bye!!!" << endl << endl;
			player_choice = player_options::Quit;
		}
		else {
			cout << "I do not recognise that option, please try again!" << endl << endl;
		}

		return player_choice;
	}

	bool run_game() {
		//decide if we should end the game
		bool end_game = false;

		give_player_options();

		string player_choice;
		get_player_input(player_choice);

		//check to see if the player has chosen to end the game. if it is change endgame = true
		end_game = evaluate_inputs(player_choice) == player_options::Quit;

		// the opposite value of end_game hints.. if true return false.
		return !end_game;
		// isPlaying is equal to the opposite value of end_game.
	}
}