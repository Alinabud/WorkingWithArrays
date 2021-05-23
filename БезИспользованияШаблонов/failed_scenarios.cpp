#include "Libraries.h" 
#include "Prototypes.h"

void failed_scenarios(double* arr, int ArrSize, int& index_of_first_negative_element, int& index_of_last_negative_element)
{
    if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 99999.9)//если в массиве только один отрицательный элемент
    {
        cout << "2) Сумма не может быть найдена, т.к. в массиве только один отрицательный элемент" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 999999.9)// если в массиве отриц элементы идут друг за другом
    {
        cout << "2) Сумма не может быть найдена, т.к. в массиве отрицательные элементы идут друг за другом" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 9999999.9)//если в массиве между отриц элементами только один элемент
    {
        cout << "2) Сумма не может быть найдена, т.к. в массиве между отрицательными элементами находится только один элемент" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 0.0)
    {
        cout << "2) Сумма не может быть найдена, т.к. в массиве нет отрицательных элементов" << endl;
    }
    else
    {
        cout << "2) Сумма элементов массива, расположенных между первым и последним отрицательными элементами, равна = ";
        cout << setprecision(6) << fixed << search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) << endl;
    }
}