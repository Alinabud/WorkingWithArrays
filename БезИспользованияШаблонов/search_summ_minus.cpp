#include "Libraries.h" 
#include "Prototypes.h"
double search_summ_minus(double* arr, int ArrSize, int& index_of_first_negative_element, int& index_of_last_negative_element)//Поиск суммы элементов, расположенных между первым и последним отрицательными элементами
{
    double sum_minus=0.0;
    if ((index_of_first_negative_element & index_of_last_negative_element)!=-1)//если в массиве есть хотя бы один отрицательный элемент
    {
        if (index_of_first_negative_element - index_of_last_negative_element == 0)
        {
            sum_minus = 99999.9;//если в массиве только один отрицательный элемент
        }
        else if ((index_of_last_negative_element - index_of_first_negative_element) == 1)
        {
            sum_minus = 999999.9;// если в массиве отриц элементы идут друг за другом
        }
        else if ((index_of_last_negative_element - index_of_first_negative_element) == 2)
        {
            sum_minus = 9999999.9;// если в массиве между отриц элементами только один элемент
        }
        else
            for (int i = index_of_first_negative_element + 1; i < index_of_last_negative_element; i++)
            {
                sum_minus += *(arr + i);
            }
    } 
    return sum_minus;
}
