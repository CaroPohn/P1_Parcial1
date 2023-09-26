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

void Warrior::SetWeapon(Weapon* weapon)
{
    this->weapon = weapon;
}

void Warrior::SetArmor(Armor* armor)
{
    this->armor = armor;
}

string Warrior::GetName()
{
    return name;
}

float Warrior::ReceiveDamage(float damage)
{
    currentHealth -= damage;
    //cout << currentHealth << " currentHealt" << endl;
    //cout << damage << " damage" << endl;
    return currentHealth;
}

void Warrior::Attack(Warrior& warrior, AttackType attackType, bool isCrit)
{
    float critRateReduction = warrior.armor->getCritRateReduction();
    warrior.ReceiveDamage(weapon->getDamage(attackType, critRateReduction, isCrit));
    cout << weapon->getDamage(attackType, critRateReduction, isCrit) << " esto llega a func attack" << endl;
    cout << warrior.GetCurrentHealth() << "ajsfhlasjhdfiausjhfiasujdhflkajsdhflaksjdhfailusfhalksjdfhalsidfhalsdjfhaldif" << endl;
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

float Warrior::getCritRate()
{
    return weapon->getWeaponCritRate();
}