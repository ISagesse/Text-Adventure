#include <iostream>
#include <string>

using namespace std;

// holds the current player name in a struct.
struct Player {
	string player_name;
};

// welcome the player to our game.
void welcome_player(Player& player) {
	cout << "Welcome to the Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	cout << "Player Name: ";
	cin >> player.player_name;

	cout << endl << "Hello " << player.player_name << endl;
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

// a enum class of our available options the player can choose.
enum class player_options
{
	Quit,
	None
};

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
}

int main() {
	
	Player player;
	welcome_player(player);

	bool isPlaying = true;
	while (isPlaying)
	{
		// isPlaying is equal to the value of run_game() function.
		isPlaying = run_game();
	}

	return 0;
}