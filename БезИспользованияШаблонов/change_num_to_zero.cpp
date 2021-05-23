#include "Libraries.h" 
#include "Prototypes.h"

int change_num_to_zero(double* arr, int ArrSize)
{
    int count = 0;
    for (int i = 0; i < ArrSize; i++)  // ������ �����, ������ ������� �� ��������� 1 �� ����. 
    {
        // ���� ������� �����, ��������������� ���������.
        if (fabs(*(arr+i)) <= 1)
        {
            // ������ ���������� ����� �� 0.
            *(arr+i) = 0;
            count = +1;
        }
    }
    return count;
}
