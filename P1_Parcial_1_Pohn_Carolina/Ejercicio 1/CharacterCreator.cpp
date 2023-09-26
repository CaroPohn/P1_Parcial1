#include "CharacterCreator.h"

CharacterCreator::CharacterCreator()
{
	string weaponName = " ";
	WeaponType weaponType = WeaponType::Sword;
	float attack = 0.0f;
	float critRate = 0.0f;
	float critDamage = 0.0f;

	string armorName = " ";
	ArmorType armorType = ArmorType::Medium;
	float defense = 0.0f;
	float weight = 0.0f;
	
	float maxHealt = 200.0f;

	string warriorName;
	int userInput;

	cout << "What's your warrior's name? Write it here: ";
	cin >> warriorName;

	warrior = new Warrior(warriorName, maxHealt);

	bool validWeaponInput = false;
	while (!validWeaponInput)
	{
		cout << "You have to choose a weapon from the armory... Which one do you pick?" << endl;
		cout << "1. Spear\n2. Sword\n3. Axe\n" << endl;
		cout << "Write the corresponding number here: ";
		cin >> userInput;

		if (userInput > 0 && userInput < 4)
			validWeaponInput = true;
	}

	switch (userInput)
	{
	case 1:
	{
		string weaponName = "Spear";
		WeaponType weaponType = WeaponType::Spear;
		float attack = 20.0f;
		float critRate = 70.0f;
		float critDamage = 15.0f;
		break;
	}

	case 2:
	{
		string weaponName = "Sword";
		WeaponType weaponType = WeaponType::Sword;
		float attack = 30.0f;
		float critRate = 60.0f;
		float critDamage = 30.0f;
		break;
	}

	case 3:
	{
		string weaponName = "Axe";
		WeaponType weaponType = WeaponType::Axe;
		float attack = 20.0f;
		float critRate = 40.0f;
		float critDamage = 40.0f;
		break;
	}
	}

	weapon = new Weapon(weaponName, weaponType, attack, critRate, critDamage);

	bool validArmorInput = false;
	while (!validArmorInput)
	{
		cout << "Before you leave! Pick an armor from the closet" << endl;
		cout << "1. Light Armor\n2. Medium Armor\n3. Heavy Armor\n" << endl;
		cout << "Write the corresponding number here: ";
		cin >> userInput;

		if (userInput > 0 && userInput < 4)
			validArmorInput = true;
	}

	switch (userInput)
	{
	case 1:
	{
		string armorName = "Light Armor";
		ArmorType armorType = ArmorType::Light;
		float defense;
		float weight;
		break;
	}

	case 2:
	{
		string armorName = "Medium Armor";
		ArmorType armorType = ArmorType::Medium;
		float defense;
		float weight;
		break;
	}

	case 3:
	{
		string armorName = "Heavy Armor";
		ArmorType armorType = ArmorType::Heavy;
		float defense;
		float weight;
		break;
	}
	}

	armor = new Armor(armorName, armorType, defense, weight);

	warrior->SetWeapon(weapon);
	warrior->SetArmor(armor);
}

CharacterCreator::~CharacterCreator()
{
	delete warrior;
	delete weapon;
	delete armor;

	cout << "A warrior was destroyed and all !" << endl;
}

Warrior CharacterCreator::GetWarrior()
{
	return *warrior;
}
