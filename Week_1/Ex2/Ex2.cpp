#include <iostream>
#include <string>
#include "matrix.h"
using namespace std;

int main()
{
    matrix<int> m1;
    m1.AddValue(0, 0, 5);
    m1.AddValue(0, 1, 12);
    m1.AddValue(1, 3, 7);
    m1.AddValue(4, 6, 20);

    cout << "Int matrix:" << endl;
    m1.Print();
    cout << "Row 0: ";
    m1.PrintRow(0);
    cout << "Is 12 in the matrix? " << (m1.BelongTo(12) ? "Yes" : "No") << endl;
    cout << "Is 99 in the matrix? " << (m1.BelongTo(99) ? "Yes" : "No") << endl;
    cout << "Max value = " << m1.MaxValue() << endl << endl;

    matrix<double> m2;
    m2.AddValue(0, 0, 1.5);
    m2.AddValue(2, 2, 9.75);
    m2.AddValue(3, 5, 4.25);

    cout << "Double matrix:" << endl;
    m2.Print();
    cout << "Max value = " << m2.MaxValue() << endl << endl;

    matrix<string> m3;
    m3.AddValue(0, 0, "apple");
    m3.AddValue(1, 1, "orange");
    m3.AddValue(2, 4, "banana");

    cout << "String matrix:" << endl;
    m3.Print();
    cout << "Is orange in the matrix? " << (m3.BelongTo("orange") ? "Yes" : "No") << endl;
    cout << "Max value = " << m3.MaxValue() << endl;

    return 0;
}
