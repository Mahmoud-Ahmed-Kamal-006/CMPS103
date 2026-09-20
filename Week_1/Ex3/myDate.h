#pragma once
#include <iostream>
using namespace std;

class myDate
{
    int day, month, year;

public:
    myDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    myDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    friend bool operator==(const myDate& a, const myDate& b)
    {
        return (a.day == b.day && a.month == b.month && a.year == b.year);
    }

    friend bool operator>(const myDate& a, const myDate& b)
    {
        if (a.year != b.year)
            return a.year > b.year;
        if (a.month != b.month)
            return a.month > b.month;
        return a.day > b.day;
    }

    friend ostream& operator<<(ostream& out, const myDate& d)
    {
        out << d.day << "/" << d.month << "/" << d.year;
        return out;
    }
};