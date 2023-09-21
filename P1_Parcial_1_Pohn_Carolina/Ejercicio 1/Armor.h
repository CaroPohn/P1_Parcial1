#pragma once
#include <iostream>

using namespace std;

enum ArmorType
{
	Light,
	Medium,
	Heavy
};

class Armor
{
private:
	string name;
	ArmorType armorType;
	float defense;
	float weight;

public:
	Armor(string name, ArmorType armorType, float defense, float weight);
	float getDmgReductionPerc(float damage);
	float getCritRateReduction();
};