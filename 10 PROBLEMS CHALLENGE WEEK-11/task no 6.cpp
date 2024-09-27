#include<iostream>
using namespace std;
int main() {
	int n,i=1,sum=0;
	cout<< "enter the nth value of series" << endl;
	cin >> n;
	while (i <= n) {
		sum += (i*i);
		i++;
		
	}
	cout << "sum is : "<<sum << endl;

	system("pause");
	return 0;
}