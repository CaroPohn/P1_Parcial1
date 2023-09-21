#include "Armor.h"

Armor::Armor(string name, ArmorType armorType, float defense, float weight)
{
    this->name = name;
    this->armorType = armorType;
    this->defense = defense;
    this->weight = weight;
}

float Armor::getDmgReductionPerc(float damage)
{

    return 0.0f;
}

float Armor::getCritRateReduction()
{

    return 0.0f;
}
