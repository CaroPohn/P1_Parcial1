#pragma once
#include <iostream>

using namespace std;

enum WeaponType
{
	Spear,
	Sword, 
	Axe
};

enum AttackType
{
	Fast,
	Normal,
	Heavy
};

class Weapon
{
private:
	string name;
	WeaponType weaponType;
	float attack;
	float critRate;
	float critDamage;

public:
	Weapon(string name, WeaponType weaponType, float attack, float critRate, float critDamage);
	float getDamage(AttackType attackType, float critRateReduction, bool isCritic);
};