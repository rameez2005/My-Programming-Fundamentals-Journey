//#include <iostream>
//using namespace std;
//
//int mode(int arr[], int size) {
//    int maxCount = 0;
//    int modeValue = -1; 
//
//    for (int i = 0; i < size; i++) {
//        int count = 0;
//
//        for (int j = i; j < size; j++) {
//            if (arr[i] == arr[j]) {
//                count++;
//            }
//        }
//
//        if (count > maxCount) {
//            maxCount = count;
//            modeValue = arr[i];
//        }
//    }
//
//    return modeValue;
//}
//
//int main() {
//    int arr[10];
//
//    cout << "Enter values for the array:" << endl;
//    for (int i = 0; i < 10; i++) {
//        cin >> arr[i];
//    }
//
//    int result = mode(arr, 10);
//
//    cout << "The mode is: " << result << endl;
//
//    system("pause");
//    return 0;
//}