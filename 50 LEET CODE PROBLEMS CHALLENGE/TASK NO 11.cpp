//#include <iostream>
//
//using namespace std;
//int main() {
//	int arr[3][3];
//	cout << "enter the numbers \n";
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//				}
//	}
//	cout << "which element do you wanna find \n";
//	int x , f=0;
//	cin >> x;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (arr[i][j] == x) {
//				arr[i][j] = 5;
//				f++;
//			}
//		}
//	}
//
//	if (f >= 1) {
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				cout<<" " << arr[i][j];
//			}
//			cout << endl;
//		}
//
//	}
//	else
//		cout << "cannot find the desird  element \n";
//
//
//
//	system("pause");
//	return 0;
//}