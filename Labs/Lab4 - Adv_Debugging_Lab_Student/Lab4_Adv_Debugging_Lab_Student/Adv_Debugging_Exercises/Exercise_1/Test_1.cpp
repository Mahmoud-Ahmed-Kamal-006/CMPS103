#include <iostream>
using namespace std;

#include "Complex.h"

#define MAX_SIZE 1000

void PrintAll(Complex ** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]->Print();
	}
}

void ClearAll(Complex ** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		delete arr[i];
	}
}

int main()
{
	Complex * ComplexPList [MAX_SIZE];
	int ItemsCount = 0;

	// initialize all the pointer of the list with NULL
	for (int i = 0; i < MAX_SIZE; i++)
	{
		ComplexPList[i] = NULL;
	}

	// TEST 1:Adding Complex Numbers
	cout << "\nAdding Complex Numbers ..." << endl;
	char cont;
	do
	{
		ComplexPList[ItemsCount] = new Complex;
		ItemsCount++;

		ComplexPList[ItemsCount]->ReadInfo();

		cout << "Enter y if you want to add another complex (to exit, press any char else): ";
		cin >> cont;
	}while (cont == 'y');

	// TEST 2: Testing PrintALL
	PrintAll(ComplexPList, MAX_SIZE); 

	// TEST 3: Removing an item
	int dindex;
	cout << "Please enter an index to delete its object: ";
	cin >> dindex;

	delete ComplexPList[dindex];
	ItemsCount--;
	
	// TEST 4: ClearALL
	ClearAll(ComplexPList, ItemsCount);

	// TEST 5: What about that?
	char * name = NULL;
	cout << strlen(name);

}