#include <iostream>
#include <conio.h>

using namespace std;

void Pluralize(char* aux);

void main()
{
	const int ARRAY_SIZE = 20;
	char word[ARRAY_SIZE];

	int maxWordLenght = ARRAY_SIZE - 2;

	char* aux;

	bool keepWriting = true;

	while (keepWriting)
	{
		aux = word;
		int letterCount = 0;
		bool validWord = false;
		int userInput = 0;
		bool validInput = false;

		for (int i = 0; i < maxWordLenght; i++)
		{
			*aux = char(32);
			aux++;
		}

		while (!validWord)
		{
			aux = word;
			letterCount = 0;

			cout << "Ingrese una palabra (de maximo 18 letras) y presione espacio para terminar: ";

			for (int i = 0; i < 10; i++)
			{
				*aux = toupper(_getch());

				letterCount++;

				if (*aux == char(32))
				{
					break;
				}

				cout << *aux;

				aux++;
			}

			cout << endl << endl;

			if (letterCount < maxWordLenght)
				validWord = true;
			else
				validWord = false;
		} 

		aux = word;

		Pluralize(aux);
		cout << endl << endl;

		while(!validInput)
		{
			cout << "----------------------------------------------------------------------------------------------" << endl;
			cout << "Quieres escribir otra palabra?\n\t1. Si\n\t2. No\n\Escribe el numero correspondiente: ";
			cin >> userInput;
			cout << "----------------------------------------------------------------------------------------------" << endl;

			if (userInput == 1 || userInput == 2)
				validInput = true;
			else
				validInput = false;
		}

		if (userInput == 2)
			break;
	}
}

void Pluralize(char* aux)
{
	char* letter = aux;

	for (int i = 0; i < 10; i++)
	{
		if (*aux == char(32))
		{
			break;
		}
		else
		{
			aux++;
		}
	}

	aux--;
	
	if (*aux == 'A' || *aux == 'E' || *aux == 'O')
	{
		aux++;
		*aux = 'S';
	}
	else if (*aux == 'Z')
	{
		*aux = 'C';
		aux++;
		*aux = 'E';
		aux++;
		*aux = 'S';
	}
	else if (*aux == 'S' || *aux == 'X')
	{

	}
	else
	{
		aux++;
		*aux = 'E';
		aux++;
		*aux = 'S';
	}

	for (int i = 0; i < 12; i++)
	{
		if (*letter == char(32))
		{
			break;
		}
		else
		{
			cout << *letter;
			letter++;
		}
	}
}