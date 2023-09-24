#include "Warrior.h"

Warrior::Warrior(string name, float maxHealth)
{
    this->name = name;
    this->maxHealth = maxHealth;
    currentHealth = maxHealth;
}

Warrior::~Warrior()
{

}

void Warrior::SetWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

void Warrior::SetArmor(Armor armor)
{
    this->armor = armor;
}

string Warrior::GetName()
{
    return name;
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
    return currentHealth;
}

bool Warrior::IsAlive()
{
    float actualHealth = GetCurrentHealth();

    if (actualHealth <= 0)
        return false;
    else
        return true;
}
