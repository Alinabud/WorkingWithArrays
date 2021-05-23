#include "functions.h" 

int Choice_Type()
{
	cout << "Select the data type:" << endl;
	cout << "Press -> '1' to select the integer type" << endl;
	cout << "Press -> '2' to select the float type" << endl;
	cout << "Press -> '3' to select the double type" << endl;
	int data_type;
	cin >> data_type;
	return data_type;
}