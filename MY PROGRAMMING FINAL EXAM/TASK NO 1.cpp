//#include<iostream>
//using namespace std;
//int main() {
//	const int r = 3, c = 3;
//	int ar[r][c];
//	int x[1000];
//// taking input 
//	cout << " ENTER THE ELEMENTS OF ARRAY \n";
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> ar[i][j];
//		}
//	}
//// printing in single line and storing in one dimension array
//	int n = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << ar[i][j];
//			x[n] = ar[i][j];
//			n++;
//
//		}
//	}
//	cout << endl;
//// finding the majority element in  1D array 
//	int t=0;
//	for (int i = 0; i < n; i++) {
//		int count = 0;
//		for (int j = i + 1; j < n; j++) {
//			if (x[i] == x[j])
//				count++;
//		}
//		if (count > n / 2) {
//			cout << " the majority element is : " << x[i] << endl;
//			t++;
//		}
//	}
//	if (t==0)
//		cout << " majority element not found "  << endl;
//
//
//
//	// printing in spiral
//
//	system("pause");
//	return 0;
//}