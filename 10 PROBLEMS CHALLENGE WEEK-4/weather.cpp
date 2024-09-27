#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout << "enter the temprature " << endl;
	cin >> temp;
	if (temp > 45)
	{
		
		cout << "WARM" << endl;

	}
	else if (temp > 20)
	{

		cout << "NORMAL" << endl;

	}
	else if (temp <= 20 )
	{

		cout << "COOL" << endl;

	}
	else cout << "error" << endl;







	system("pause");
	return 0;
}