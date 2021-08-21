#include<iostream>
 
using namespace std;

int main()
{
	int num1, num2,num,product=0;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "\nEnter the 2nd number: ";
	cin >> num2;
	num = num2;
	while (num2 != 0)
	{
		product = product + num1;
		num2 = num2 - 1;
	}
	cout << "\nPRODUCT OF " << num1 << " and " << num << " is : " << product;


	return 0;
}