#include<iostream>
using namespace std;
int main()
{
	int n1 = 50, n2 = 100, addition, subtraction, multiplication, modulas;
	float division=0.0;

	addition = n1 + n2;// ADD NUMBERS
	cout << "SUM IS  :"<< addition << endl;// PRINT SUM

	subtraction = n1 - n2;// SUBTRACT NUMBERS
	cout << "difference is  :" << subtraction << endl;// PRINT DIFFERENCE

	multiplication = n1* n2;// MULTIPLY NUMBERS
	cout << "product is  :" << multiplication << endl;// PRINT PRODUCT
	
	division = static_cast<float> (n1) /(n2);// DIVIDE NUMBERS
	cout << "divison  is  :" << division << endl;// PRINT DIVISION

	modulas = n1% n2;
	cout << "MOD   is  :" << modulas << endl;

	

	system("pause");

	return 0;

}
