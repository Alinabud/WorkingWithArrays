#pragma once
#include "functions.h" 
template<class T>
int search_first_index_of_negative_element(T* arr, int ArrSize, int index_of_first_negitave_element)// ����� ������� �������, ������� �������� ������������
{
    for (int i = 0; i < ArrSize; i++)
    {
        if (*(arr + i) < 0)
        {
            index_of_first_negitave_element = i;
            break;
        }
    }
    return index_of_first_negitave_element;
}