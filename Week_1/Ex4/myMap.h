#pragma once
#include <iostream>
#include "myPair.h"
using namespace std;

template <typename K, typename V>
class myMap
{
    myPair<K, V> list[100];
    int size;

public:
    myMap()
    {
        size = 0;
    }

    bool addPair(myPair<K, V> p)
    {
        if (size == 100)
            return false;

        for (int i = 0; i < size; i++)
            if (list[i].getKey() == p.getKey())
                return false;

        list[size] = p;
        size++;
        return true;
    }

    bool getValue(K key, V& value)
    {
        for (int i = 0; i < size; i++)
        {
            if (list[i].getKey() == key)
            {
                value = list[i].getValue();
                return true;
            }
        }
        return false;
    }

    int count()
    {
        return size;
    }

    bool updateValue(K key, V newValue)
    {
        for (int i = 0; i < size; i++)
        {
            if (list[i].getKey() == key)
            {
                list[i].setPair(key, newValue);
                return true;
            }
        }
        return false;
    }

    void displayMap()
    {
        if (size == 0)
        {
            cout << "Map is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++)
            cout << "(" << list[i].getKey() << ", " << list[i].getValue() << ")" << endl;
    }

    bool deletePair(myPair<K, V> p)
    {
        for (int i = 0; i < size; i++)
        {
            if (list[i] == p)
            {
                for (int j = i; j < size - 1; j++)
                    list[j] = list[j + 1];
                size--;
                return true;
            }
        }
        return false;
    }
};