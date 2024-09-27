//#include <iostream>
//
//
//using namespace std;
//void most_occoured(int arr[][4], int row , int col) {
//	int max_cont = 0;
//	for (int i = 0; i < row; i++) {
//		for (int j = i; j < col; j++) {
//			int count = 1;
//			for (int k = 0; k < col; k++) {
//				for (int l = k + 1; l < col; l++) {
//					if (arr[i][j] == arr[k][l])
//						count++;
//				}
//			}
//			if (count > max_cont)
//				max_cont = count;
//
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//	
//		for (int j = i; j < col; j++) {
//			int count = 1;
//			for (int k = 0; k < col; k++) {
//				for (int l = k + 1; l < col; l++) {
//					if (arr[i][j] == arr[k][l])
//						count++;
//				}
//			}
//			if (count == max_cont)
//				cout << "most occoured number : " << arr[i][j];
//		}
//		
//
//	}
//	
//}
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
//	most_occoured(arr, 4, 4);
//
//	system("pause");
//	return 0;
//}