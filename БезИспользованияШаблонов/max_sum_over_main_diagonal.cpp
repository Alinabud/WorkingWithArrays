#include "Libraries.h" 
#include "Prototypes.h"

int max_sum_over_main_diagonal(int** arr, int ArrSize, int sum_1, int MAX_SUM_OVER_MAIN_DIAGONAL)
{
    for (int z = 1; z < ArrSize; z++)//������� ���������� ����� ���������, ����������� ��� ������� ����������
    {
        for (int i = 0, j = i; i < ArrSize - z; i++, j++)
        {
            sum_1 += arr[i][j + z];
        }
        if (sum_1 > MAX_SUM_OVER_MAIN_DIAGONAL)
        {
            MAX_SUM_OVER_MAIN_DIAGONAL = sum_1;
        }
        sum_1 = 0;
    }
    return MAX_SUM_OVER_MAIN_DIAGONAL;
}