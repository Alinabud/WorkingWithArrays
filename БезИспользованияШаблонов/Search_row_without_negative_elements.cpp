#include "Libraries.h" 
#include "Prototypes.h"

bool search_row_without_negative_element(int** arr, int ArrSize, int i)// ����� ������ �� ���������� ������������� ��������
{
    bool check=true;
    for (int j = 0; j < ArrSize; j++)
    {
        if (arr[i][j] >= 0)// ������� ������, � ������� ��� ������������� ���������
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }
    return check;
}