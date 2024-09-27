//#include <iostream>
//using namespace std;
//
//void sort(int arr[],int size) {
//	int temp = 0;
//	for (int i = 0; i < size; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] > arr[j]) {
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//
//	}
//
//}
//int main()
//{
//	int arr1[10], arr2[10], arr3[10], MAX;
//	cout << " ENTER THE NUMBERS OF FIRST ARRAY :";
//	for (int i = 0; i < 10; i++) {
//		cin >> arr1[i];
//	}
//	cout << " ENTER THE NUMBERS OF SECOND ARRAY :";
//	for (int i = 0; i < 10; i++) {
//		cin >> arr2[i];
//	}
//	sort(arr1,10);
//	sort(arr2,10);
//	for (int i = 9; i >= 0; i--) {
//		if (arr1[i] > arr2[i]) {
//			arr3[i] = arr1[i];
//		}
//		else
//			arr3[i] = arr2[i];	
//	}
//	sort(arr3, 10);
//	for (int i = 0; i < 10; i++) {
//		cout<< arr3[i];
//	}
//	
//
//
//	//MAX = arr[0];
//	//for (int i = 0; i < 15; i++) {
//	//	int count = 0;
//	//	for (int j = 0; j < 15; j++) {
//	//		if (arr[i] == arr[j]) {
//	//			count++;
//	//		}
//	//	}
//	//	if (count == 1) {
//	//		if (arr[i] > MAX)
//	//			MAX = arr[i];
//	//	}
//
//
//	//}
//	//cout << "THE MAXIMUN UNIQUE NUMBER IS :" << MAX << endl;
//	system("pause");
//	return 0;
//}