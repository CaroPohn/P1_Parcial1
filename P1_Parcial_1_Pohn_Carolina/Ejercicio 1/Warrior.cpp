#include "Warrior.h"

Warrior::Warrior(string name, float maxHealth)
{
    this->name = name;
    this->maxHealth = maxHealth;
}

void Warrior::SetWeapon(Weapon weapon)
{
}

void Warrior::SetArmor(Armor armor)
{
}

string Warrior::GetName()
{
    return string();
}

float Warrior::ReceiveDamage(float damage)
{
    return 0.0f;
}

float Warrior::Attack(Warrior warrior, AttackType attackType, bool isCrit)
{
    return 0.0f;
}

float Warrior::GetCurrentHealth()
{
    return 0.0f;
}

float Warrior::IsAlive()
{
    return 0.0f;
}
