#include<iostream>
using namespace std;
int main() {
	int arr[3][3] , trp[3][3];
	bool flag = false;
	cout << "enter the numbers " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (arr[i][j] != trp[j][i])
				flag = true;
	}

if(flag==true)
cout << " the matrix is SYMMETRIC " << endl;
else
cout << " the matrix is NOT SYMMETRIC " << endl;



	system("pause");
	return 0;
}