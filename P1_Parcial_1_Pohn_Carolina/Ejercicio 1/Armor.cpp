#include "Armor.h"

Armor::Armor()
{
    name = " ";
    armorType = {};
    defense = 0.0f;
    weight = 0.0f;
}

Armor::Armor(string name, ArmorType armorType, float defense, float weight)
{
    this->name = name;
    this->armorType = armorType;
    this->defense = defense;
    this->weight = weight;
}

Armor::~Armor()
{

}

float Armor::getDmgReductionPerc(float damage)
{

    return 0.0f;
}

float Armor::getCritRateReduction()
{

    return 0.0f;
}
