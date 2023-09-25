#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	int arraySize;
	int userNumber;
	int userPos;

	cout << "Ingrese el tamanio que desea que tenga su array: ";
	cin >> arraySize;

	int* randomNumbers = new int[arraySize];

	int* aux = randomNumbers;
	int* higherNumber = randomNumbers; 

	for (int i = 0; i < arraySize; i++)
	{
		*aux = (rand() % 401) + 100;

		cout << "El numero almacenado es: " << *aux << " y su direccion de memoria es: " << aux << endl;

		if (*higherNumber < *aux)
		{
			higherNumber = aux;
		}

		aux++;
	}

	cout << "----------------------------------------------------------------------------------------------" << endl << endl;
	cout << "El numero mas grande del array es: " << *higherNumber << " y su direccion de memoria es: " << higherNumber << endl;

	aux = randomNumbers;

	cout << "----------------------------------------------------------------------------------------------" << endl << endl;
	cout << "Introduzca a continuacion un numero que quiera agregar al array: ";
	cin >> userNumber;

	do
	{
		cout << "\nAhora introduzca la posicion en la que quiere ubicar su numero y reemplazar el anterior: ";
		cin >> userPos;
	} while (userPos < 0 || userPos > arraySize);

	aux += userPos - 1;
	*aux = userNumber;

	aux = randomNumbers;

	cout << "----------------------------------------------------------------------------------------------" << endl << endl;
	cout << "NUEVA LISTA: " << endl;

	for (int i = 0; i < arraySize; i++)
	{
		cout << "El numero almacenado es: " << *aux << " y su direccion de memoria es: " << aux << endl;
		aux++;
	}

	delete[] randomNumbers;
}