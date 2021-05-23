#pragma once
#include "functions.h" 

template<class T>
void Finding_the_sum_of_elements_with_odd_numbers(T* arr, int ArrSize)
{
    if (SUMM_ODD_NUMBER(arr, ArrSize) == 99)
    {
        cout << "1) The sum of elements with odd numbers cannot be found! There is no element with an odd number in the array" << endl;
    }
    else
        if (SUMM_ODD_NUMBER(arr, ArrSize) == 999)
        {
            cout << "1) The sum of elements with odd numbers cannot be found! There is only one element with an odd number in the array" << endl;
        }
        else
        {
            cout << "1) The sum of elements with odd numbers is: " << setprecision(6) << fixed << SUMM_ODD_NUMBER(arr, ArrSize) << endl;
        }
}