﻿// Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, 
// необходимо найти сумму всех сторон).

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

const int PentagonSize = 5;
int Pentagon[PentagonSize];

void GetPentagonSides() 
{
    int letter = 65;

    for (int i = 0; i < PentagonSize; i++)
    {
        cout << "Введите длину стороны : " << (char)letter++ << endl;
        cin >> Pentagon[i];
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int pentagonSize = 5;
    int Pentagon[pentagonSize];    

    cout << "Чтобы узнать длину стороне пятиугольника введите длину каждой стороны отдельно : " << endl;

    GetPentagonSides();
    

}

