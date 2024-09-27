//#include<iostream>
//using namespace std;
//int main() {
//	int arr1[2][2],arr2[2][2],arr3[2][2];
//	char op;
//	cout << "enter the numbers for first array" << endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++)
//			cin >> arr1[i][j];
//	}
//
//	cout << "enter the numbers for 2nd array" << endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++)
//			cin >> arr2[i][j];
//	}
//
//	cout << "enter the operation" << endl;
//	cin >> op;
//	switch (op) {
//	case'+':
//
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 2; j++)
//				arr3[i][j] = (arr1[i][j] + arr2[i][j]);
//		}
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 2; j++)
//				cout << " "<< arr3[i][j];
//			cout << endl;
//		}
//		break;
//	case '-':
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 2; j++)
//				arr3[i][j] = (arr1[i][j] - arr2[i][j]);
//		}
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 2; j++)
//				cout << " " << arr3[i][j];
//			cout << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}