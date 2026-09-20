#include <iostream>
#include <string>
#include "myPair.h"
#include "myMap.h"
using namespace std;

int main()
{
    myMap<int, string> idMap;
    int choice;

    do
    {
        cout << endl;
        cout << "1- Add new pair" << endl;
        cout << "2- Update existing pair" << endl;
        cout << "3- Search for a value given a key" << endl;
        cout << "4- Delete a pair" << endl;
        cout << "5- Print map contents" << endl;
        cout << "0- Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int id;
        string name;

        if (choice == 1)
        {
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;

            myPair<int, string> p(id, name);
            if (idMap.addPair(p))
                cout << "Pair added" << endl;
            else
                cout << "Could not add pair (ID already exists or map is full)" << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter new name: ";
            cin >> name;

            if (idMap.updateValue(id, name))
                cout << "Pair updated" << endl;
            else
                cout << "ID not found" << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter ID: ";
            cin >> id;

            if (idMap.getValue(id, name))
                cout << "Name = " << name << endl;
            else
                cout << "ID not found" << endl;
        }
        else if (choice == 4)
        {
            cout << "Enter ID of the pair to delete: ";
            cin >> id;
            cout << "Enter its name: ";
            cin >> name;

            myPair<int, string> p(id, name);
            if (idMap.deletePair(p))
                cout << "Pair deleted" << endl;
            else
                cout << "Pair not found" << endl;
        }
        else if (choice == 5)
        {
            cout << "Number of pairs: " << idMap.count() << endl;
            cout << endl;
            idMap.displayMap();
        }
        else if (choice != 0)
        {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);

    return 0;
}
