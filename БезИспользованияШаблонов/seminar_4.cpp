#include "Prototypes.h"
#include "Libraries.h"

void seminar_4(int n)
{
    int composition = 1;
    int sum_1=0, MAX_SUM_OVER_MAIN_DIAGONAL = 0, MAX_SUM_UNDER_MAIN_DIAGONAL = 0;
    int** arr = new int* [n];  // создаем динамический массив
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
     //заполняем массив элементами
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    bool check = true;
    while (check == true)
    {
        cout << "Введите номер задания, которое хотите выполнить" << endl;
        cout << "Найжмите 1, чтобы найти произведение элементов в тех строках, которые не содержат отрицательных элементов." << endl;
        cout << "Найжмите 2, чтобы найти максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы." << endl;
       
        int task;
        cin >> task;

        switch (task)
        {
        case 1:
            // НАХОЖДЕНИЕ ПРОИЗВЕДЕНИЯ ЭЛЕМЕНТОВ СТРОК, НЕ СОДЕРЖАЩИХ ОТРИЦАТЕЛЬНЫХ ЭЛЕМЕНТОВ
            Finding_the_product_of_string_elements(arr, n);
            break;
        case 2:
            // НАХОЖДЕНИЕ МАКСИМАЛЬНОЙ СУММЫ ЭЛЕМЕНТОВ ДИАГОНАЛИ, ПАРАЛЛЕЛЬНОЙ ГЛАВНОЙ ДИАГОНАЛИ
            if (n <= 2)
            {
                cout << "It is impossible to find the maximum. there are no diagonals parallel to the main diagonal in the matrix." << endl;
                //cout << "Enter a single integer the dimension of the array " << endl;
                //cin >> n;
            }
            else
            Finding_the_maximum_sum_of_diagonal_elements(arr, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL, MAX_SUM_UNDER_MAIN_DIAGONAL, n);
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
   

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}