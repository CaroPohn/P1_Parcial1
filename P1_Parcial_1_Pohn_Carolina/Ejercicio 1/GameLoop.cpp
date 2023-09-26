#include "GameLoop.h"

GameLoop::GameLoop(Warrior player1, Warrior player2)
{
	srand(time(NULL));

	rounds = 0;
	AttackType attackTypeP1 = AttackType::Normal;
	AttackType attackTypeP2 = AttackType::Normal;
	
	while (player1.IsAlive() && player2.IsAlive())
	{
		system("cls");

		Player1Turn(player1, attackTypeP1, player2);
		Player1Turn(player2, attackTypeP2, player1);
	}
}

GameLoop::~GameLoop()
{

}

void GameLoop::AskAttackType(AttackType& attackType)
{
	int userInput;

	bool validInput = false;

	while (!validInput)
	{
		cout << "What type of attack do you want to do?" << endl;
		cout << "1. Fast Attack\n2. Normal Attack\n3. Charged Attack\n" << endl;
		cout << "Write the corresponding number here: ";
		cin >> userInput;

		if (userInput > 0 && userInput < 4)
			validInput = true;
	}

	switch (userInput)
	{
	case 1:
	{
		attackType = AttackType::Fast;
		break;
	}

	case 2:
	{
		attackType = AttackType::Normal;
		break;
	}

	case 3:
	{
		attackType = AttackType::Charged;
		break;
	}
	}
}

void GameLoop::Player1Turn(Warrior& player1, AttackType& attackTypeP1, Warrior& player2)
{
	cout << "Is " << player1.GetName() << "'s turn..." << endl;
	cout << "\t HP: " << player1.GetCurrentHealth() << endl;
	cout << "\t ROUND: " << rounds << endl;

	AskAttackType(attackTypeP1);

	bool isCritic = rand() % 100 <= player1.getCritRate();
	if (isCritic)
		cout << "YOU MADE A CRITICAL HIT!" << endl;

	player1.Attack(player2, attackTypeP1, isCritic);

	cout << player1.GetName() << " hitted " << player2.GetName() << "! Now his HP is " << player2.GetCurrentHealth() << endl;

	system("pause");
	system("cls");
}

void GameLoop::Player2Turn(Warrior& player1, AttackType& attackTypeP2, Warrior& player2)
{
	cout << "Is " << player2.GetName() << "'s turn..." << endl;
	cout << "\t HP: " << player2.GetCurrentHealth() << endl;
	cout << "\t ROUND: " << rounds << endl;

	AskAttackType(attackTypeP2);

	bool isCritic = rand() % 100 <= player2.getCritRate();
	if (isCritic)
		cout << "YOU MADE A CRITICAL HIT!" << endl;

	player2.Attack(player1, attackTypeP2, isCritic);
	cout << player1.GetCurrentHealth() << endl;

	cout << player2.GetName() << " hitted " << player1.GetName() << "! Now his HP is " << player1.GetCurrentHealth() << endl;

	system("pause");
	system("cls");

	rounds++;
}
