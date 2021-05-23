#include "Libraries.h" 
#include "Prototypes.h"

int comparison_over_and_under_sum(int** arr, int ArrSize, int sum_1, int MAX_SUM_OVER_MAIN_DIAGONAL, int sum_3)
{
    int MAX_SUM = 0;
    if (max_sum_over_main_diagonal(arr, ArrSize, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL) > max_sum_under_main_diagonal(arr, ArrSize, sum_1, sum_3))
    {
        MAX_SUM = 999;
    }
    else if(max_sum_under_main_diagonal(arr, ArrSize, sum_1, sum_3) > max_sum_over_main_diagonal(arr, ArrSize, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL))
    {
        MAX_SUM = 9999;
    }
    else
    {
        MAX_SUM = 99999;
    }
    return MAX_SUM;
}