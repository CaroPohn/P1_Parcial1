#include "CharacterCreator.h"
#include "GameLoop.h"

void main()
{
	cout << "PLAYER 1 CREATION" << endl;
	CharacterCreator createP1 =	CharacterCreator();

	system("pause");
	system("cls");
	cout << "PLAYER 2 CREATION" << endl;
	CharacterCreator createP2 = CharacterCreator();

	Warrior player1 = createP1.GetWarrior();
	Warrior player2 = createP2.GetWarrior();

	system("pause");
	system("cls");
	cout << "LET'S START THE GAME" << endl;

	GameLoop game(player1, player2);
}