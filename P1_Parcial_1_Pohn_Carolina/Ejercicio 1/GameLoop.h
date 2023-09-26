#pragma once
#include "Warrior.h"

class GameLoop
{
private:
	int rounds;

public:
	GameLoop(Warrior player1, Warrior player2);
	~GameLoop();

	void AskAttackType(AttackType& attackType); 
	void Player1Turn(Warrior& player1, AttackType& attackTypeP1, Warrior& player2);
	void Player2Turn(Warrior& player1, AttackType& attackTypeP2, Warrior& player2);
};
