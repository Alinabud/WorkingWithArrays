#pragma once
#include "functions.h" 
template <class T>
T search_summ_minus(T* arr, int ArrSize, int index_of_first_negative_element, int index_of_last_negative_element)//����� ����� ���������, ������������� ����� ������ � ��������� �������������� ����������
{
    T sum_minus = 0;
    if ((index_of_first_negative_element & index_of_last_negative_element) != -1)//���� � ������� ���� ���� �� ���� ������������� �������
    {
        if (index_of_first_negative_element - index_of_last_negative_element == 0)
        {
            sum_minus = 99999;//���� � ������� ������ ���� ������������� �������
        }
        else if ((index_of_last_negative_element - index_of_first_negative_element) == 1)
        {
            sum_minus = 999999;// ���� � ������� ����� �������� ���� ���� �� ������
        }
        else if ((index_of_last_negative_element - index_of_first_negative_element) == 2)
        {
            sum_minus = 9999999;// ���� � ������� ����� ����� ���������� ������ ���� �������
        }
        else
            for (int i = index_of_first_negative_element + 1; i < index_of_last_negative_element; i++)
            {
                sum_minus += *(arr + i);
            }
    }
    return sum_minus;

}
