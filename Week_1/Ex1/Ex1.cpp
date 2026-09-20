#include <iostream>
#include <string>
using namespace std;

template <typename T>
T getMin(T arr[], int size)
{
    T min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int nums[5] = { 8, 3, 9, 1, 7 };
    char letters[4] = { 'z', 'b', 'k', 'd' };
    string words[3] = { "banana", "apple", "cherry" };

    cout << "Min of int array = " << getMin(nums, 5) << endl;
    cout << "Min of char array = " << getMin(letters, 4) << endl;
    cout << "Min of string array = " << getMin(words, 3) << endl;

    return 0;
}
