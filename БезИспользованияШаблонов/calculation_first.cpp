#include "Libraries.h" 
#include "Prototypes.h"

bool calculation_first(char sentence[], bool check_1)
{
    char symbols[] = "AEIOUY";              //�������������

       /* if (strchr(symbols, toupper(sentence[0])))//������ � strchr ����� �������� � ������ ������������������, toupper ��������������� � ��������� �����
        {
            for (int i = 0; sentence[i]; i++)
            {
                cout << sentence[i];            //����� ����a, ������������� � ������� �����
                if ((sentence[i] == ' ')|| (sentence[i] == '!')|| (sentence[i] == '.')|| (sentence[i] == ',')|| (sentence[i] == '?')|| (sentence[i] == '!'))
                {
                    break;
                }
            }
            check_1 = true;
        }*/

    for (int i = 0; sentence[i]; i++)
    {
        if (sentence[i] == ' ' && strchr(symbols, toupper(sentence[i + 1]))) {  //������ � strchr ����� �������� � ������ ������������������, toupper ��������������� � ��������� �����
            for (int j = i + 1; sentence[j] && sentence[j] != ' ' && sentence[j] != '!' && sentence[j] != '.' && sentence[j] != '\'' && sentence[j] != ','; j++)
            {
                cout << sentence[j];      //����� ����, ������������ � ������� �����
            }
            cout << " ";
            check_1 = true;
        }
    }
    /*if ((check_1 == false) && (check_2 == false))
    {
        cout << "������! � ����� ��� ����, ������������ � ������� ����" << endl;
    }*/
    if ((check_1 == false)) 
    {
        return false;
    }
    else return true;
}