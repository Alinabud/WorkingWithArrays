#include "Libraries.h" 
#include "Prototypes.h"

int seminar_5()
{
    string path = "myfile.txt";
    char sentence[256];
     ofstream file;
     file.open(path);//, ofstream::app);
     if (!file.is_open())
     {
         cout << "Error, file is not found" << endl;
     }
     else
     {
         //char sentence[256];
         cin.ignore();
         cout << "Введите текст" << endl;
         cin.getline(sentence, 256);//Вводим данные
         file << sentence;//Записываем данные в файл
         //calculation(sentence);    //вычисление функции
         cout << endl;
     }
     file.close();

    ifstream FILE;
    FILE.open(path);
    if (!FILE.is_open())//если файла не существует
    {
        cout << "Error, file is not found" << endl;
    }
    else if (FILE.peek() == EOF)// если первый символ конец файла
    {
        cout << "File empty" << endl;
    }
    else
    {
        cout << "\t'File is open'\n" << endl;
        string str;
        if ((calculation_first(sentence, false)) == false)
        {
            cout << "Ошибка! В файле нет слов, начинающиеся с гласных букв" << endl;
        }
        else {
            while (!FILE.eof())//пока не конец файла
            {
                FILE >> sentence;
                calculation_first(sentence, true);
            }
    }
        }
    FILE.close();
    return 0;
}