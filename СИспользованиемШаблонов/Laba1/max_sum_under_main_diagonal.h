#pragma once
#include "functions.h" 
template <class T>
T max_sum_under_main_diagonal(T** arr, int ArrSize, T sum_1, T MAX_SUM_UNDER_MAIN_DIAGONAL)
{
    for (int z = 1; z < ArrSize; z++)//находим наибольшую сумму диагонали, находящуюся под главной диагональю
    {
        for (int i = 0, j = i; i < ArrSize - z; i++, j++)
        {
            sum_1 += arr[i + z][j];
        }
        if (sum_1 > MAX_SUM_UNDER_MAIN_DIAGONAL)
        {
            MAX_SUM_UNDER_MAIN_DIAGONAL = sum_1;
        }
        sum_1 = 0;
    }
    return MAX_SUM_UNDER_MAIN_DIAGONAL;
}