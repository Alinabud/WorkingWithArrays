#include "functions.h" 

bool calculation_first(char sentence[], bool check_1)
{
    char symbols[] = "AEIOUY";              //инициализация

    for (int i = 0; sentence[i]; i++)
    {
        if (sentence[i] == ' ' && strchr(symbols, toupper(sentence[i + 1]))) {  //пробел и strchr поиск символов в строке инициализированных, toupper преобразовывает в заглавную букву
            for (int j = i + 1; sentence[j] && sentence[j] != ' ' && sentence[j] != '!' && sentence[j] != '.' && sentence[j] != '\'' && sentence[j] != ','; j++)
            {
                cout << sentence[j];      //вывод слов, начинающихся с гласной буквы
            }
            cout << " ";
            check_1 = true;
        }
    }
    if ((check_1 == false))
    {
        return false;
    }
    else return true;
}