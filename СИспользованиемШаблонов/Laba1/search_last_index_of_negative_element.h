#pragma once
#include "functions.h" 
template<class T>
int search_last_index_of_negative_element(T* arr, int ArrSize, int index_of_last_negitave_element)// поиск последнего индекса, элемент которого отрицательен
{
    for (int i = ArrSize - 1; i >= 0; i--)
    {
        if (*(arr + i) < 0)
        {
            index_of_last_negitave_element = i;
            break;
        }
    }
    return index_of_last_negitave_element;
}