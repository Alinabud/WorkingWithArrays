#include "Libraries.h" 
#include "Prototypes.h"
double *sorting(double* arr, int ArrSize)//����������� ����� � �����
{
    double* new_arr = new double[ArrSize];
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
   /* int j = 0;

    for (int i = 0; i < ArrSize; i++)
    {
        new_arr[i] = 0;
    }

    for (int i = 0; i < ArrSize; i++)
    {
        if (fabs(arr[i]) > 1)
        {
            new_arr[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < ArrSize; i++)
        arr[i] = new_arr[i];

    delete[]new_arr;*/


   /* for (int i = 0; i < ArrSize; i++)
    {
        if (*(arr + i) != 0)
        {
            cout << setprecision(2) << *(arr + i) << " ";
        }
    }
    for (int i = 0; i < ArrSize; i++)
    {
        if (*(arr + i) == 0)
        {
            cout << setprecision(2) << fixed << *(arr + i) << " ";
        }
    }*/
}
   