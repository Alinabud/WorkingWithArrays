#pragma once
#include "functions.h" 
template <class T>

void result(T* arr, int ArrSize)
{
    T* new_arr = new T[ArrSize];
    if (change_num_to_zero(arr, ArrSize) != 0)
    {
        cout << "3) The compressed array looks like this: ";
        new_arr = sorting(arr, ArrSize);
        for (int i = 0; i < ArrSize; i++)
        {
            cout << setprecision(2) << fixed << new_arr[i] << " ";
        }
    }
    else
    {
        cout << "3) You cannot compress the array because there are no elements whose modulus does not exceed 1." << endl;
    }
    delete[] new_arr;
}