#pragma once
#include "functions.h" 
template<class T>
T SUMM_ODD_NUMBER(T* arr, int ArrSize)// Поиск суммы элементов с нечетными номерами
{
    T summ_odd_number = 0;
    if (ArrSize == 1) //если в массиве только один элемент
    {
        summ_odd_number = 99;
    }
    else if (ArrSize < 4) //если в массиве только один элемент с нечетным номером
    {
        summ_odd_number = 999;
    }
    else
    {
        for (int i = 1; i < ArrSize; i += 2)
        {
            summ_odd_number += *(arr + i);
        }
    }
    return summ_odd_number;
}