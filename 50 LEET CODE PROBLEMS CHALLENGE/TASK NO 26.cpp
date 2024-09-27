//#include<iostream>
//using namespace std;
//const int x = 3;
//const int y = 3;
//void MULTIPLY(int ar1[][y], int ar2[][x] , int  res[][x]) {
//	
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < x; j++)
//			res[i][j] = 0;
//	}
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < y; k++)
//				res[i][j] += ar1[i][k] * ar2[k][j];
//		}
//	}
//
//	
//}
//
//int main() {
//
//	int ar1[x][y];
//	int ar2[y][x];
//	int mult[x][x];
//	cout << "enter the elements of first matrix \n";
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++)
//			cin >> ar1[i][j];
//	}
//	cout << "enter the elements of second matrix \n";
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++)
//			cin >> ar2[i][j];
//	}
//	MULTIPLY(ar1, ar2, mult);
//		cout << "matrix after multiplication is :  \n";
//		for (int i = 0; i < x; i++) {
//			for (int j = 0; j < x; j++)
//			cout<< " " << mult[i][j];
//			cout << endl;
//		}
//		system("pause");
//	return 0;
//}
