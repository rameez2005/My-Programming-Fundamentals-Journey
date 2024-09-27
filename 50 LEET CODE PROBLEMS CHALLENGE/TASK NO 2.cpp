//#include <iostream>
//using namespace std;
//bool isprime(int x) {
//	if (x == 1 || x == 0 || x < 0)
//		return 0;
//	else if (x == 2)
//		return 1;
//	else {
//		for (int j = 2; j <= x / 2; j++) {
//			if (x % j == 0) {
//				return 0;
//			}
//
//		}
//		return 1;
//	}
//}
//int main() {
//	int arr[10];
//	cout << "enter the prime numbers :";
//	for (int i = 0; i < 10; i++) {
//		cin >> arr[i];
//		if (!isprime(arr[i])) {
//			do {
//				cout << " PLEASE enter the prime number :";
//				cin >> arr[i];
//
//			} while (!isprime(arr[i]));
//
//
//		}
//		
//	}
//
//	cout << "THE ARRAY IS FULL \n";
//
//	system("pause");
//	return 0;
//}