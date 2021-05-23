#pragma once
#include "functions.h" 
template <class T>
T comparison_over_and_under_sum(T** arr, int ArrSize, T sum_1, T MAX_SUM_OVER_MAIN_DIAGONAL, T MAX_SUM_UNDER_MAIN_DIAGONAL)
{
    T MAX_SUM = 0;
    if (max_sum_over_main_diagonal(arr, ArrSize, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL) > max_sum_under_main_diagonal(arr, ArrSize, sum_1, MAX_SUM_UNDER_MAIN_DIAGONAL))
    {
        MAX_SUM = 999;
    }
    else if (max_sum_under_main_diagonal(arr, ArrSize, sum_1, MAX_SUM_UNDER_MAIN_DIAGONAL) > max_sum_over_main_diagonal(arr, ArrSize, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL))
    {
        MAX_SUM = 9999;
    }
    else
    {
        MAX_SUM = 99999;
    }
    return MAX_SUM;
}