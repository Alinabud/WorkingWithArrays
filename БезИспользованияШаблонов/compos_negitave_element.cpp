
#include "Libraries.h" 
#include "Prototypes.h"

int compos_negitave_element(int** arr, int ArrSize, int composition, int i)
{
    for (int j = 0; j < ArrSize; j++)
    {
        composition *= arr[i][j];
    }
   return composition;
};