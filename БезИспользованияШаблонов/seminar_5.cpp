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
         cout << "������� �����" << endl;
         cin.getline(sentence, 256);//������ ������
         file << sentence;//���������� ������ � ����
         //calculation(sentence);    //���������� �������
         cout << endl;
     }
     file.close();

    ifstream FILE;
    FILE.open(path);
    if (!FILE.is_open())//���� ����� �� ����������
    {
        cout << "Error, file is not found" << endl;
    }
    else if (FILE.peek() == EOF)// ���� ������ ������ ����� �����
    {
        cout << "File empty" << endl;
    }
    else
    {
        cout << "\t'File is open'\n" << endl;
        string str;
        if ((calculation_first(sentence, false)) == false)
        {
            cout << "������! � ����� ��� ����, ������������ � ������� ����" << endl;
        }
        else {
            while (!FILE.eof())//���� �� ����� �����
            {
                FILE >> sentence;
                calculation_first(sentence, true);
            }
    }
        }
    FILE.close();
    return 0;
}