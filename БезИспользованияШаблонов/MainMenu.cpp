#include "Libraries.h" 
#include "Prototypes.h"


void MainMenu()
{
    int seminar;
    bool check = true;
    while (check == true)
    {
        cout << "Click on -> '1' to open seminar 3 \n" << endl;
        cout << "Click on -> '2' to open seminar 4 \n" << endl;
        cout << "Click on -> '3' to open seminar 5 \n" << endl;
        cin >> seminar;
        switch (seminar) 
        {
        case 1:
            system("cls");
            cout << "Enter a single integer the dimension of the array and 'n' real elements" << endl;
            seminar_3();
            break;
        case 2:
            int n;
            system("cls");
            cout << "Enter 1 integer the dimension of the square matrix and 'n' integer elements" << endl;
            cin >> n;
            while (true)
            {
                if ((n <= 0)||(n> 32767))
                {
                    cout << "\n\tImpossible to fill the array" << endl;
                    cout << "Enter a single integer the dimension of the array " << endl;
                    cin >> n;
                }
               /* if (n <= 2)
                {
                    cout << "It is impossible to find the maximum. there are no diagonals parallel to the main diagonal in the matrix." << endl;
                    cout << "Enter a single integer the dimension of the array " << endl;
                    cin >> n;
                }*/
                else
                    break;
            }
            seminar_4(n);
            //cout << "\nConclusion 2 integers number\n" << endl;
            break;
        case 3:
            system("cls");
            //cout << "Enter data for the task" << endl;
            seminar_5();
            cout << "\n\nConclusion sorted words or word" << endl;
            break;
        default:
            system("cls");
            cout << "You didn't choose right number seminar" << endl;
            return MainMenu();
        }
        cout << "Enter S if you want to stay in seminar or any key if you want to leave programm " << endl;
        char num;
        cin >> num;
        if (num == 'S' || num == 's')
        {
            check = true;
            system("cls");
        }
        else
        {
            cout << "You left programm" << endl;
            check = false;
        }
    }
}
