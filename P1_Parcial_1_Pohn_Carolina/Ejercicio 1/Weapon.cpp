#include "Weapon.h"

Weapon::Weapon()
{
	name = " ";
	weaponType = {};
	attack = 0.0f;
	critRate = 0.0f;
	critDamage = 0.0f;
}

Weapon::~Weapon()
{

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
	float extraDamage = 10.0f;
	
	switch (attackType)
	{
	case AttackType::Fast:
	{
		if (isCritic)
		{
			return attack + (critDamage - extraDamage);
		}
		else
			return attack;
	}

	case AttackType::Normal:
	{
		if (isCritic)
		{
			return attack + critDamage;
		}
		else
			return attack;
	}

	case AttackType::Charged:
	{
		if (isCritic)
		{
			cout << attack << "a" << endl;
			return attack + (critDamage + extraDamage);
		}
		else
		{
			cout << attack << "este" << endl;
			return attack;
		}
	}
	}
}

float Weapon::getWeaponCritRate()
{
	return critRate;
}
