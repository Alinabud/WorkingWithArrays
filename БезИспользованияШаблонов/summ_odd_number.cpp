#include "Libraries.h" 
#include "Prototypes.h"
double SUMM_ODD_NUMBER(double* arr, int ArrSize)// Поиск суммы элементов с нечетными номерами
{
    double summ_odd_number = 0.0;
    if (ArrSize == 1) //если в массиве только один элемент
    {
        summ_odd_number = 99.9;
    }
     else if (ArrSize < 4) //если в массиве только один элемент с нечетным номером
    {
        summ_odd_number = 999.9;
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