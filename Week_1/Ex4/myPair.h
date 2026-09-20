#pragma once
#include <iostream>
using namespace std;

template <typename K, typename V>
class myPair
{
    K key;
    V value;

public:
    myPair() {}

    myPair(K k, V v)
    {
        key = k;
        value = v;
    }

    void setPair(K k, V v)
    {
        key = k;
        value = v;
    }

    K getKey() const { return key; }
    V getValue() const { return value; }

    bool operator==(const myPair<K, V>& p) const
    {
        return (key == p.key && value == p.value);
    }
};