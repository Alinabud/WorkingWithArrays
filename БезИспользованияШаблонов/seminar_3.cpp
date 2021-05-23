#include "Libraries.h" 
#include "Prototypes.h"

void seminar_3()
{
   
    double summ_minus = 0;
    int index_of_first_negative_element = -1;// ������ ������ ��������, ����������� ������������� �����
    int index_of_last_negative_element = -1;// ��������� ������ ��������,����������� ������������� �����
    int ArrSize = 0; // ������ �������.
    int task;
    cin >> ArrSize; // ���� ������� �������.
   
    while (true)
    {
        if (ArrSize <= 0)
        {
            cout << "\n\tImpossible to fill the array" << endl;
            cout << "Enter a single integer the dimension of the array and 'n' real elements" << endl;
            cin >> ArrSize;
        }
        else
            break;
    }

    double* arr = new double[ArrSize]; // �������� ������������� �������. // ���������� ������� ����������.

    for (int i = 0; i < ArrSize; i++)
    {
        cin >> *(arr + i); // ���� ��������.
    }
    bool check = true;
    while (check == true)
    {
        cout << "������� ����� �������, ������� ������ ���������" << endl;
        cout << "�������� 1, ����� ����� ����� ��������� ������� � ��������� �������� � ����� ������� ���� ���������." << endl;
        cout << "�������� 2, ����� ����� c���� ��������� �������, ������������� ����� ������ � ��������� �������������� ���������� � ����� ������� ���� ���������." << endl;
        cout << "������� 3, ����� ����� ������, ������ �� ���� ��� ��������, ������ ������� �� ��������� 1. �������������� � ����� ������� �������� ��������� ������." << endl;
        cin >> task;

        switch (task)
        {
        case 1:
            // ����� ����� ��������� � ��������� ��������
            Finding_the_sum_of_elements_with_odd_numbers(arr, ArrSize);
            break;
        case 2:
            search_first_index_of_negative_element(arr, ArrSize, index_of_first_negative_element);
            search_last_index_of_negative_element(arr, ArrSize, index_of_last_negative_element);
            failed_scenarios(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element);
            break;
        case 3:
            result(arr, ArrSize);
            break;
        default:
            system("cls");
            cout << "You didn't choose right number task" << endl;
        }
        cout << "Enter W if you want to choose other task or any key if you want to leave seminar " << endl;
        char num;
        cin >> num;
        if (num == 'W' || num == 'w')
        {
            check = true;
            system("cls");
        }
        else
        {
            cout << "You left seminar" << endl;
            check = false;
        }
    }
    cout << endl;

    delete[] arr;
}