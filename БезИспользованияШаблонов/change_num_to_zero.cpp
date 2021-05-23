#include "Libraries.h" 
#include "Prototypes.h"

int change_num_to_zero(double* arr, int ArrSize)
{
    int count = 0;
    for (int i = 0; i < ArrSize; i++)  // «амена чисел, модуль которых не превышает 1 на ноль. 
    {
        // ≈сли найдено число, соответствующее диапазону.
        if (fabs(*(arr+i)) <= 1)
        {
            // «амена найденного числа на 0.
            *(arr+i) = 0;
            count = +1;
        }
    }
    return count;
}
