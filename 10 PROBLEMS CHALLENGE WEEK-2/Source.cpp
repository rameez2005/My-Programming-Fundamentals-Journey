#include<iostream>
using namespace std;
int main()
{
	int num = 0, sum = 0, rem = 0, j = 1;
	int digit = 0, rev = 0;
	cout << "Enter an integer: " << endl;
	cin >> num;
	cout << endl;
	cout << "Digits of integers are: ";
	// reverse integer
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);
	//for (+)ve integer
	for (int i = 0; i < rev;)  // rev act as num 
	{
		rem = rev % 10;
		rev = rev / 10;
		cout << rem << " ";
		sum = sum + rem;
	}
	cout << endl;
	cout << "sum of digits is :" << sum << endl;
	cout << endl;
	//for (-)ve integer
	sum = 0;
	cout << "Digits of integers are: ";
	for (int i = 0; i > rev;)
	{
		rem = rev % 10;
		if (j <= 0)
		{
			rem = (-1) * rem;
		}
		j--;
		cout << rem << " ";
		rev = rev / 10;
		sum = sum + rem;
	}
	cout << endl;
	cout << "sum of digits is :" << sum << endl;

	system("pause");
	return 0;
}