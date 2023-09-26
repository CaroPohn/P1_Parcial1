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
	Charged
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
	Weapon();
	~Weapon();

	Weapon(string name, WeaponType weaponType, float attack, float critRate, float critDamage);
	float getDamage(AttackType attackType, float critRateReduction, bool isCritic);
	float getWeaponCritRate();
};