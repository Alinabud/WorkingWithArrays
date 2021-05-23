#pragma once
#include "functions.h" 

template <class T>
void EnterData (int ArrSize, T* arr)
{
    for (int i = 0; i < ArrSize; i++)
    {
        cin >> *(arr + i); // ¬вод значени€.
    }
}