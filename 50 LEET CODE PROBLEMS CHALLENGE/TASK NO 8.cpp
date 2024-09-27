//#include <iostream>
//using namespace std;
//int main() {
//	int arr1[20], arr2[20], even[20] = { 0 }, odd[20] = {0} , ec=0,oc=0;
//	cout << " ENTER THE NUMBERS of first array :";
//	for (int i = 0; i < 20; i++) {
//		cin >> arr1[i];
//	}
//	cout << " enter the numbers of second array :";
//	for (int i = 0; i < 20; i++) {
//		cin >> arr2[i];
//	}
//	for (int i = 0; i < 20; i++) {
//		int temp ;
//		temp = arr1[i];
//		if ( temp % 2 == 0) {
//			even[ec] = arr1[i];
//			ec++;
//		}
//		else {
//			odd[oc] = arr1[i];
//			oc++;
//		}
//		
//	}
//	for (int i = 0; i < 20; i++) {
//		if (arr2[i] % 2 == 0) {
//			even[ec] = arr2[i];
//			ec++;
//		}
//		else {
//			odd[oc] = arr2[i];
//			oc++;
//		}
//	}
//	cout << " even array : \n";
//	for (int i = 0; i < 20; i++) {
//		cout<< " " << even[i];
//	}
//	cout << endl;
//	cout << " odd array : \n";
//	for (int i = 0; i < 20; i++) {
//		cout << " " << odd[i];
//	}
//
//	system("pause");
//	return 0;
//}