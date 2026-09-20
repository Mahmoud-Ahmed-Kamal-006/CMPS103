#include <iostream>
#include "matrix.h"
#include "myDate.h"
using namespace std;

int main()
{
    matrix<myDate> dateMatrix;

    dateMatrix.AddValue(0, 0, myDate(15, 3, 2020));
    dateMatrix.AddValue(0, 1, myDate(1, 1, 2024));
    dateMatrix.AddValue(2, 3, myDate(30, 12, 1999));

    cout << "Date matrix:" << endl;
    dateMatrix.Print();

    cout << "Row 0: ";
    dateMatrix.PrintRow(0);

    myDate d1(1, 1, 2024);
    myDate d2(2, 2, 2022);
    cout << "Is 1/1/2024 in the matrix? " << (dateMatrix.BelongTo(d1) ? "Yes" : "No") << endl;
    cout << "Is 2/2/2022 in the matrix? " << (dateMatrix.BelongTo(d2) ? "Yes" : "No") << endl;
    cout << "Latest date = " << dateMatrix.MaxValue() << endl;

    return 0;
}