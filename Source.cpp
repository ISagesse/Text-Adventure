#include <iostream>
#include <string>

using namespace std;

struct Player {
	string player_name;
};

void welcome_player(Player& player) {
	cout << "Welcome to the Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	cout << "Player Name: ";
	cin >> player.player_name;

	cout << endl << "Hello " << player.player_name << endl;
}

int main() {
	
	Player player;
	welcome_player(player);

	return 0;
}