#pragma once
#include "functions.h" 
template <class T>
void seminar_3(T type)
{
    double summ_minus = 0;
    int index_of_first_negative_element = -1;// первый индекс элемента, содержащего отрицательное число
    int index_of_last_negative_element = -1;// последний индекс элемента,содержащего отрицательное число
    int ArrSize = 0; // Размер массива.
    int task;
    bool check = true;
    while (check == true)
    {
        cout << "Enter the number of the task you want to complete" << endl;
        cout << "Press '1' to find the sum of the elements in the array with odd numbers and find the positions of these elements." << endl;
        cout << "Press '2' to find the sum of the array elements located between the first and last negative elements and find the positions of these elements." << endl;
        cout << "Press '3' to compress the array, removing all elements whose modulus does not exceed 1. Fill the empty elements at the end of the array with zeros." << endl;
        cin >> task;
        cout << "Enter a single integer the dimension of the array and 'n' elements" << endl;
        cin >> ArrSize; // Ввод размера массива.

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
        T* arr = new T[ArrSize];
        EnterData<T>(ArrSize, arr);
        switch (task)
        {
        case 1:
            // Поиск суммы элементов с нечетными номерами
            Finding_the_sum_of_elements_with_odd_numbers(arr, ArrSize);
            break;
        case 2:
            index_of_first_negative_element = search_first_index_of_negative_element(arr, ArrSize, index_of_first_negative_element);
            index_of_last_negative_element = search_last_index_of_negative_element(arr, ArrSize, index_of_last_negative_element);
            failed_scenarios(arr, ArrSize, index_of_first_negative_element, index_of_last_negative_element);
            break;
        case 3:
            result(arr, ArrSize);
            cout << endl;
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
        delete[] arr;
    }
    cout << endl;
}