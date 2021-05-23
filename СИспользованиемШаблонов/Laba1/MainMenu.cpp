#include "functions.h" 
void MainMenu()
{
    int seminar;
    int type;
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
            type = Choice_Type();
            switch (type)
            {
            case 1:
                seminar_3(1);
                break;
            case 2:
                seminar_3(1.0f);
                break;
            case 3:
                seminar_3(1.0);
                break;
            default:
                cout << "Error! Select the data type again" << endl;
                break;
            }
            break;
        case 2:
            system("cls");
            type = Choice_Type();
            switch (type)
            {
            case 1:
                seminar_4(1);
                break;
            case 2:
                seminar_4(1.0);
                break;
            case 3:
                seminar_4(1.0f);
                break;
            default:
                cout << "Error! Select the data type again" << endl;
                break;
            }
            break;
        case 3:
            system("cls");
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
