#include "Libraries.h" 
#include "Prototypes.h"

void failed_scenarios(double* arr, int ArrSize, int& index_of_first_negative_element, int& index_of_last_negative_element)
{
    if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 99999.9)//���� � ������� ������ ���� ������������� �������
    {
        cout << "2) ����� �� ����� ���� �������, �.�. � ������� ������ ���� ������������� �������" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 999999.9)// ���� � ������� ����� �������� ���� ���� �� ������
    {
        cout << "2) ����� �� ����� ���� �������, �.�. � ������� ������������� �������� ���� ���� �� ������" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 9999999.9)//���� � ������� ����� ����� ���������� ������ ���� �������
    {
        cout << "2) ����� �� ����� ���� �������, �.�. � ������� ����� �������������� ���������� ��������� ������ ���� �������" << endl;
    }
    else if (search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) == 0.0)
    {
        cout << "2) ����� �� ����� ���� �������, �.�. � ������� ��� ������������� ���������" << endl;
    }
    else
    {
        cout << "2) ����� ��������� �������, ������������� ����� ������ � ��������� �������������� ����������, ����� = ";
        cout << setprecision(6) << fixed << search_summ_minus(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element) << endl;
    }
}