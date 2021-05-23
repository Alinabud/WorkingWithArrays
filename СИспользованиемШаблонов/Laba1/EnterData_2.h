#pragma once
#include "functions.h" 
template <class T>
void EnterData_2 (int ArrSize, T** arr)
{
    for (int i = 0; i < ArrSize; i++)
    {
        for (int j = 0; j < ArrSize; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
}