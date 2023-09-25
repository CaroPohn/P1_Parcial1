#include <iostream>

using namespace std;

int* GetAdress(int* numberArray, int arraySize, int numberSearched);

void main()
{
	srand(time(NULL));

	const int ARRAY_SIZE = 10;
	int numberArray[ARRAY_SIZE];

	int numberSearched;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numberArray[i] = (rand() % 101) + 100;
		cout << "Numero: " << numberArray[i] << " Direccion de memoria: " << &numberArray[i] << endl;
	}

	cout << "\nEscribe el numero que quieres buscar en la lista: ";
	cin >> numberSearched;

	int* numberDirection = GetAdress(numberArray, ARRAY_SIZE, numberSearched);

	cout << "----------------------------------------------------------------------------------------------" << endl;
	if (numberDirection == nullptr)
		cout << "\nEl numero que buscas no esta en la lista :(" << endl << endl;
	else
		cout << "\nLa direccion de memoria de " << numberSearched << " es: " << numberDirection << endl << endl;
	cout << "----------------------------------------------------------------------------------------------" << endl;
}

int* GetAdress(int* numberArray, int arraySize, int numberSearched)
{	
	for (int i = 0; i < arraySize; i++)
	{
		if (*numberArray == numberSearched)
			return numberArray;

		numberArray++;
	}

	return nullptr;
}