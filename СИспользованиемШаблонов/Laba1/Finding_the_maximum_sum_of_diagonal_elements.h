#pragma once
#include "functions.h" 
template <class T>
void Finding_the_maximum_sum_of_diagonal_elements(T** arr, int n)
{
    T sum_1 = 0;
    T MAX_SUM_OVER_MAIN_DIAGONAL = 0;
    T MAX_SUM_UNDER_MAIN_DIAGONAL = 0;
    if (comparison_over_and_under_sum(arr, n, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL, MAX_SUM_UNDER_MAIN_DIAGONAL) == 999)
    {
        cout << "2) The maximum among the sums of elements of diagonals parallel to the main diagonal of the matrix is: ";
        cout << max_sum_over_main_diagonal(arr, n, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL) << endl;
    }
    else if (comparison_over_and_under_sum(arr, n, sum_1, MAX_SUM_OVER_MAIN_DIAGONAL, MAX_SUM_UNDER_MAIN_DIAGONAL) == 9999)
    {
        cout << "2) The maximum among the sums of elements of diagonals parallel to the main diagonal of the matrix is: ";
        cout << max_sum_under_main_diagonal(arr, n, sum_1, MAX_SUM_UNDER_MAIN_DIAGONAL) << endl;
    }
    else cout << "2) In the matrix, you cannot find the maximum among the sums of elements of diagonals parallel to the main diagonal, since they are all equal." << endl;

}