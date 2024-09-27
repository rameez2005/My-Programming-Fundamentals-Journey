#include <iostream>
using namespace std;
int main() {
	int units,bill;
	cout << "enter the units" << endl;
	cin >> units;
	if (units <= 50)
		bill = units * 50;
	else if (units<=150)
		bill = (50 * 50)+((units-50)*75);
	else if (units <= 250)
		bill = (50 * 50) + (100*75)+((units - 150) * 120);
	else
		bill = (50 * 50) + (100 * 75) + (100 * 120)+ ((units - 250) * 150);
	cout << "your bill is  : " << bill << endl;

	system("pause");
	return 0;
}