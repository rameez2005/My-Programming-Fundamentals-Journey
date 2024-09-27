//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//const int row = 13, seat = 6;
//
//
//char Farr(char arr[][6], int row);
//char choice();
//void post(int& r, int& sno, char& ch);
//void mark(int& sno, int& r, char arr[][6]);
//void repeat();
//
//int main() {
//	char arr[13][6], type;
//	int sno, r;
//
//	Farr(arr, row);
//
//	do {
//		type = choice();
//		post(r, sno, type);
//		mark(r, sno, arr);
//		repeat();
//	} while (true);
//
//	return 0;
//}
//
//char Farr(char arr[][6], int row) {
//	cout << setw(45) << " " << " WELCOME TO EMIRATES " << endl;
//	cout << endl;
//	cout << "      " << "A B C D E F" << endl;
//
//	for (int i = 0; i < row; i++) {
//		cout << "Row " << i << " ";
//		for (int j = 0; j < seat; j++) {
//			arr[i][j] = '*';
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return arr[0][0];
//}
//
//char choice() {
//	char ch;
//	cout << "choice ticket type Firstclass(F)  Businessclass(B)  Economyclass(E) : ";
//	cin >> ch;
//	return ch;
//}
//
//void post(int& r, int& sno, char& ch) {
//	cout << "choice row no: ";
//	cin >> r;
//
//	cout << "choice seat no: ";
//	cin >> sno;
//
//
//	if ((ch == 'F' || ch == 'f') && (r < 1 || r > 2 || sno < 1 || sno > 6)) {
//		cout << "Invalid seat or row number" << endl;
//		post(r, sno, ch);
//	}
//	else if ((ch == 'B' || ch == 'b') && (r < 3 || r > 7 || sno < 1 || sno > 6)) {
//		cout << "Invalid seat or row number " << endl;
//		post(r, sno, ch);
//	}
//	else if ((ch == 'E' || ch == 'e') && (r < 8 || r > 13 || sno < 1 || sno > 6)) {
//		cout << "Invalid seat or row number" << endl;
//		post(r, sno, ch);
//	}
//}
//
//void mark(int& sno, int& r, char arr[][6]) {
//	if (arr[r - 1][sno - 1] == 'X') {
//		cout << "Seat reserved! choice another seat." << endl;
//	}
//	else {
//		arr[sno - 1][r - 1] = 'X';
//
//		cout << "      " << "A B C D E F" << endl;
//		for (int i = 0; i < row; i++) {
//			cout << "Row " << i << " ";
//
//			for (int j = 0; j < seat; j++) {
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//}
//
//void repeat() {
//	int n;
//	cout << "Do you want another seat ? \nenter 1 for Yes\nenter 2 for Exit: ";
//	cin >> n;
//
//	if (n == 2) {
//		exit(0);
//	}
//}