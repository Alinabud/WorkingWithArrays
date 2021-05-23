#pragma once
#include "functions.h" 
template <class T>
void seminar_4(T type)
{
    int n;
    int composition = 1;
    bool check = true;
    while (check == true)
    {
        cout << "Enter the number of the task you want to complete" << endl;
        cout << "Press '1' to find the product of elements in those rows that do not contain negative elements." << endl;
        cout << "Press '2' to find the maximum among the sums of elements of diagonals parallel to the main diagonal of the matrix." << endl;

        int task;
        cin >> task;

        cout << "Enter 1 integer the dimension of the square matrix and 'n' integer elements" << endl;
        cin >> n;
        while (true)
        {
            if ((n <= 0) || (n > 32767))
            {
                cout << "\n\tImpossible to fill the array" << endl;
                cout << "Enter a single integer the dimension of the array " << endl;
                cin >> n;
            }
            else
                break;
        }
        T** arr = new T * [n];  // ñîçäàåì äèíàìè÷åñêèé ìàññèâ
        for (int i = 0; i < n; i++)
        {
            arr[i] = new T[n];
        }
        //çàïîëíÿåì ìàññèâ ıëåìåíòàìè
        EnterData_2 <T>(n, arr);

        switch (task)
        {
        case 1:
            // ÍÀÕÎÆÄÅÍÈÅ ÏĞÎÈÇÂÅÄÅÍÈß İËÅÌÅÍÒÎÂ ÑÒĞÎÊ, ÍÅ ÑÎÄÅĞÆÀÙÈÕ ÎÒĞÈÖÀÒÅËÜÍÛÕ İËÅÌÅÍÒÎÂ
            Finding_the_product_of_string_elements(arr, n);
            break;
        case 2:
            // ÍÀÕÎÆÄÅÍÈÅ ÌÀÊÑÈÌÀËÜÍÎÉ ÑÓÌÌÛ İËÅÌÅÍÒÎÂ ÄÈÀÃÎÍÀËÈ, ÏÀĞÀËËÅËÜÍÎÉ ÃËÀÂÍÎÉ ÄÈÀÃÎÍÀËÈ
            if (n <= 2)
            {
                cout << "It is impossible to find the maximum. there are no diagonals parallel to the main diagonal in the matrix." << endl;
                //cout << "Enter a single integer the dimension of the array " << endl;
                //cin >> n;
            }
            else
                Finding_the_maximum_sum_of_diagonal_elements(arr, n);
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
        for (int i = 0; i < n; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
}