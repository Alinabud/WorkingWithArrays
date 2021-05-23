#include "Libraries.h" 
#include "Prototypes.h"




void Finding_the_product_of_string_elements(int** arr, int n)
{
    int composition = 1;
    cout << "1) ";
    for (int i = 0; i < n; i++)
    {
        if (search_row_without_negative_element(arr, n, i) == true)
        {

            cout << "The product of the elements " << i << " a string that does not contain negative elements is equal to: " << compos_negitave_element(arr, n, composition,i) << endl;
        }
        else
        {
            cout << "error, " << i << " row has a minus element " << endl;
        }
        composition = 1;
    }
}