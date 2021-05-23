#pragma once
#include "functions.h" 

template <class T>
T change_num_to_zero(T* arr, int ArrSize)
{
    int count = 0;
    for (int i = 0; i < ArrSize; i++)  // ������ �����, ������ ������� �� ��������� 1 �� ����. 
    {
        // ���� ������� �����, ��������������� ���������.
        if (fabs(*(arr + i)) <= 1)
        {
            // ������ ���������� ����� �� 0.
            *(arr + i) = 0;
            count = +1;
        }
    }
    return count;
}