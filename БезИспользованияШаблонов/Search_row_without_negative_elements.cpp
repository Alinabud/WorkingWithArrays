#include "Libraries.h" 
#include "Prototypes.h"

bool search_row_without_negative_element(int** arr, int ArrSize, int i)// ѕоиск строки не содержащей отрицательные элементы
{
    bool check=true;
    for (int j = 0; j < ArrSize; j++)
    {
        if (arr[i][j] >= 0)// находим строки, в которых нет отрицательных элементов
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