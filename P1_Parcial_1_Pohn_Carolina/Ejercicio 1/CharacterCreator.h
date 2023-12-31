#pragma once
#include "Warrior.h"
#include "Weapon.h"
#include "Armor.h"

class CharacterCreator
{
private:
	Warrior* warrior;
	Weapon* weapon;
	Armor* armor;

public:
	CharacterCreator();
	~CharacterCreator();

	Warrior GetWarrior();
};

