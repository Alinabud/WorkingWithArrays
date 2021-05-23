#pragma once
#include "functions.h" 
template <class T>
T compos_negitave_element(T** arr, int ArrSize, T composition, int i)
{
    for (int j = 0; j < ArrSize; j++)
    {
        composition *= arr[i][j];
    }
    return composition;
};

