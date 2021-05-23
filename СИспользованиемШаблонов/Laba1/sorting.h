#pragma once
#include "functions.h" 
template <class T>
T* sorting(T* arr, int ArrSize)//����������� ����� � �����
{
    T* new_arr = new T[ArrSize];
    for (int i = 0; i < ArrSize; i++)
    {
        new_arr[i] = arr[i];
    }
    for (int i = 1; i <= ArrSize; i++) // ���� ������ � ������ ��������� ������ 0
    {
        for (int j = 0; j < ArrSize - i; j++)
        {
            if (new_arr[j] == 0) //������� ����� 0?
            {
                new_arr[j] = new_arr[j + 1];
                new_arr[j + 1] = 0;
            }
        }
    }
    return new_arr;
}