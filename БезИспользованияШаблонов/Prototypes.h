#pragma once
#include "Libraries.h" 
#include "Prototypes.h"
using namespace std;
//меню
void MainMenu();
int main();

//семинар 3 
void seminar_3();
double search_summ_minus(double* arr, int ArrSize, int& index_of_first_negitave_element, int& index_of_last_negitave_element);
int* search_first_index_of_negative_element(double* arr, int ArrSize, int& index_of_first_negitave_element);
int* search_last_index_of_negative_element(double* arr, int ArrSize, int& index_of_last_negitave_element);
int change_num_to_zero(double* arr, int ArrSize);
double *sorting(double* arr, int ArrSize);
double SUMM_ODD_NUMBER(double* arr, int ArrSize);
void Finding_the_sum_of_elements_with_odd_numbers(double* arr, int ArrSize);
void failed_scenarios(double* arr, int ArrSize, int& index_of_first_negative_element, int& index_of_last_negative_element);
void result(double* arr, int ArrSize);

//семинар 4
void seminar_4(int n);
void Finding_the_maximum_sum_of_diagonal_elements(int** arr, int sum_1, int MAX_SUM_OVER_MAIN_DIAGONAL, int MAX_SUM_UNDER_MAIN_DIAGONAL, int n);
void Finding_the_product_of_string_elements(int** arr, int n);
int compos_negitave_element(int** arr, int ArrSize, int composition, int i);
int max_sum_over_main_diagonal(int** arr, int ArrSize, int sum_1, int MAX_SUM_OVER_MAIN_DIAGONAL);
int max_sum_under_main_diagonal(int** arr, int ArrSize, int sum_1, int MAX_SUM_UNDER_MAIN_DIAGONAL);
int comparison_over_and_under_sum(int** arr, int ArrSize, int sum_1, int MAX_SUM_OVER_MAIN_DIAGONAL, int MAX_SUM_UNDER_MAIN_DIAGONAL);
bool search_row_without_negative_element(int** arr, int ArrSize, int i);

//семинар 5
int seminar_5();
bool calculation_first(char sentence[], bool check_1);
