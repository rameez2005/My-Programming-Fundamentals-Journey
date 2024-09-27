//#include <iostream>
//
//
//using namespace std;
//void swap(int& a, int& b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//
//}
//
//
//int main() {
//	int arr[4][4];
//	cout << "enter the numbers \n";
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (i < j)
//				swap(arr[i][j], arr[j][i]);
//
//		}
//	}
//	cout << "the tranpose is :  \n";
//
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}