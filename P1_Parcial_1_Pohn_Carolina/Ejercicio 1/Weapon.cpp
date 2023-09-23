#include "Weapon.h"

Weapon::Weapon()
{
	name = " ";
	weaponType = {};
	attack = 0.0f;
	critRate = 0.0f;
	critDamage = 0.0f;
}

Weapon::Weapon(string name, WeaponType weaponType, float attack, float critRate, float critDamage)
{
	this->name = name;
	this->weaponType = weaponType;
	this->attack = attack;
	this->critRate = critRate;
	this->critDamage = critDamage;
}

float Weapon::getDamage(AttackType attackType, float critRateReduction, bool isCritic)
{
	return 0.0f;
}