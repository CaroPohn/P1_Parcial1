#pragma once
#include <iostream>
#include "Weapon.h"
#include "Armor.h"

using namespace std;

class Warrior
{
private:
	string name;
	Weapon weapon;
	Armor armor;
	float maxHealth;
	float currentHealth;

public:
	Warrior(string name, float maxHealth);
	void SetWeapon(Weapon weapon);
	void SetArmor(Armor armor);
	string GetName();
	float ReceiveDamage(float damage);
	float Attack(Warrior warrior, AttackType attackType, bool isCrit);
	float GetCurrentHealth();
	float IsAlive();
};