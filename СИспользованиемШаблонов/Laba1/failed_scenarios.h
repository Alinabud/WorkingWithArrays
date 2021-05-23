#pragma once
#include "functions.h" 
template <class T>
void failed_scenarios(T* arr, int ArrSize, int index_of_first_negative_element, int index_of_last_negative_element)
{
    if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 99999)//если в массиве только один отрицательный элемент
    {
        cout << "2) The sum cannot be found because there is only one negative element in the array" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 999999)// если в массиве отриц элементы идут друг за другом
    {
        cout << "2) The sum cannot be found because negative elements follow each other in the array" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 9999999)//если в массиве между отриц элементами только один элемент
    {
        cout << "2) The sum cannot be found because there is only one element between negative elements in the array" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 0)
    {
        cout << "2) The sum cannot be found because there are no negative elements in the array" << endl;
    }
    else
    {
        cout << "2) The sum of the array elements located between the first and last negative elements is = ";
        cout << setprecision(6) << fixed << search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) << endl;
    }
}