#include <iostream>

using namespace std;

int main() {


	int num = 0, rev = 0, rem = 0, temp;
	cout << "enter the number " << endl;

	cin >> num;
	temp = num;
	while (temp != 0)
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;

	}

	if (rev == num)
		cout << "it is a pelindrome number" << endl;
	else
		cout << "it is NOT a pelindrome number" << endl;
	system("pause");

	return 0;

}