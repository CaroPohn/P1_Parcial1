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
    switch (armorType)
    {
    case ArmorType::Light:
    {
        return 0.10f;
        break;
    }

    case ArmorType::Medium:
    {
        return 0.20f;
        break;
    }

    case ArmorType::Heavy:
    {
        return 0.30f;
        break;
    }
    }
}

float Armor::getCritRateReduction()
{
    switch (armorType)
    {
    case ArmorType::Light:
    {
        return 0.10f;
        break;
    }

    case ArmorType::Medium:
    {
        return 0.15f;
        break;
    }

    case ArmorType::Heavy:
    {
        return 0.20f;
        break;
    }
    }
}
