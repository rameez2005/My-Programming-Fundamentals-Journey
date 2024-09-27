//#include<iostream>
//#include<ctime>
//using namespace std;
//void selectionSort(int arr[][5]) {
//	int temp;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = j+1; k < 5; k++) {
//				if (arr[i][j] > arr[i][k]) {
//					temp = arr[i][j];
//					arr[i][j] = arr[i][k];
//					arr[i][k] = temp;
//			 }
//
//
//			}
//
//		}
//
//	}
//
//}
//void bubbleSort(int arr[][5]) {
//	int temp;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = j + 1; k < 5; k++) {
//				if (arr[i][j] > arr[i][k]) {
//					temp = arr[i][j];
//					arr[i][j] = arr[i][k];
//					arr[i][k] = temp;
//				}
//
//
//			}
//
//		}
//
//	}
//
//}
//
//int main()
//
//{
//	srand(time(0));
//	int arr[5][5];
//	int row=0;
//	cout << "enter the numbers(i fiiled it with random numbers as it will take long time to input )" << endl;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//
//			arr[i][j] = rand() % 100 + 1;
//
//		}
//	}
//
//
//	// selection sorting 
//
//	selectionSort(arr);
//	cout << "the selection sorted array is : " << endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//
//			cout << " " << arr[i][j];
//
//		}
//		cout << endl;
//	}
//	// bubble sorting 
//
//	bubbleSort(arr);
//	cout << "the bubble sorted array is : " << endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//
//			cout << " " << arr[i][j];
//
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//
//}