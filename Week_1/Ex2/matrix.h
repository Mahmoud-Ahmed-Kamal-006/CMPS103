#pragma once
#include <iostream>
using namespace std;

template <typename T>
class matrix
{
    T arr[5][7];
    bool used[5][7];
public:
    matrix()
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 7; j++)
                used[i][j] = false;
    }

    void AddValue(int row, int col, T value)
    {
        if (row < 0 || row >= 5 || col < 0 || col >= 7)
        {
            cout << "Invalid row or column" << endl;
            return;
        }
        arr[row][col] = value;
        used[row][col] = true;
    }

    bool BelongTo(T value)
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 7; j++)
                if (used[i][j] && arr[i][j] == value)
                    return true;
        return false;
    }

    void PrintRow(int row)
    {
        if (row < 0 || row >= 5)
        {
            cout << "Invalid row" << endl;
            return;
        }
        for (int j = 0; j < 7; j++)
        {
            if (used[row][j])
                cout << arr[row][j] << "\t";
            else
                cout << "-\t";
        }
        cout << endl;
    }

    void Print()
    {
        for (int i = 0; i < 5; i++)
            PrintRow(i);
    }

    T MaxValue()
    {
        T max = T();
        bool first = true;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (used[i][j])
                {
                    if (first || arr[i][j] > max)
                    {
                        max = arr[i][j];
                        first = false;
                    }
                }
            }
        }
        return max;
    }
};
