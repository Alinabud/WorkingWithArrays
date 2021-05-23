#include "Libraries.h" 
#include "Prototypes.h"

bool calculation_first(char sentence[], bool check_1)
{
    char symbols[] = "AEIOUY";              //инициализаци€

       /* if (strchr(symbols, toupper(sentence[0])))//пробел и strchr поиск символов в строке инициализированных, toupper преобразовывает в заглавную букву
        {
            for (int i = 0; sentence[i]; i++)
            {
                cout << sentence[i];            //вывод словa, начинающегос€ с гласной буквы
                if ((sentence[i] == ' ')|| (sentence[i] == '!')|| (sentence[i] == '.')|| (sentence[i] == ',')|| (sentence[i] == '?')|| (sentence[i] == '!'))
                {
                    break;
                }
            }
            check_1 = true;
        }*/

    for (int i = 0; sentence[i]; i++)
    {
        if (sentence[i] == ' ' && strchr(symbols, toupper(sentence[i + 1]))) {  //пробел и strchr поиск символов в строке инициализированных, toupper преобразовывает в заглавную букву
            for (int j = i + 1; sentence[j] && sentence[j] != ' ' && sentence[j] != '!' && sentence[j] != '.' && sentence[j] != '\'' && sentence[j] != ','; j++)
            {
                cout << sentence[j];      //вывод слов, начинающихс€ с гласной буквы
            }
            cout << " ";
            check_1 = true;
        }
    }
    /*if ((check_1 == false) && (check_2 == false))
    {
        cout << "ќшибка! ¬ файле нет слов, начинающиес€ с гласных букв" << endl;
    }*/
    if ((check_1 == false)) 
    {
        return false;
    }
    else return true;
}