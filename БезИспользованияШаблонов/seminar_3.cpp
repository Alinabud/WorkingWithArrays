#include "Libraries.h" 
#include "Prototypes.h"

void seminar_3()
{
   
    double summ_minus = 0;
    int index_of_first_negative_element = -1;// первый индекс элемента, содержащего отрицательное число
    int index_of_last_negative_element = -1;// последний индекс элемента,содержащего отрицательное число
    int ArrSize = 0; // Размер массива.
    int task;
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

    double* arr = new double[ArrSize]; // Создание динамического массива. // Заполнение массива значениями.

    for (int i = 0; i < ArrSize; i++)
    {
        cin >> *(arr + i); // Ввод значения.
    }
    bool check = true;
    while (check == true)
    {
        cout << "Введите номер задания, которое хотите выполнить" << endl;
        cout << "Найжмите 1, чтобы найти сумму элементов массива с нечетными номерами и найти позиции этих элементов." << endl;
        cout << "Найжмите 2, чтобы найти cумму элементов массива, расположенных между первым и последним отрицательными элементами и найти позиции этих элементов." << endl;
        cout << "Нажмите 3, чтобы сжать массив, удалив из него все элементы, модуль которых не превышает 1. Освободившиеся в конце массива элементы заполнить нулями." << endl;
        cin >> task;

        switch (task)
        {
        case 1:
            // Поиск суммы элементов с нечетными номерами
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