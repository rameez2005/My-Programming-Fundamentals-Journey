//#include <iostream>
//
//const int MAX_ROWS = 10;
//const int MAX_COLS = 10;
//
//using namespace std;
//
//void inputArray(int arr[][MAX_COLS], int rows, int cols) {
//    cout << "Enter elements of the array:" << endl;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << "Enter element at position (" << i << ", " << j << "): ";
//            cin >> arr[i][j];
//        }
//    }
//}
//
//void concatenateArrays(int arr1[][MAX_COLS], int arr2[][MAX_COLS], int result[][2 * MAX_COLS], int rows1, int cols1, int rows2, int cols2) {
//
//    for (int i = 0; i < rows1; ++i) {
//        for (int j = 0; j < cols1; ++j) {
//            result[i][j] = arr1[i][j];
//        }
//    }
//
//    for (int i = 0; i < rows2; ++i) {
//        for (int j = 0; j < cols2; ++j) {
//            result[i][cols1 + j] = arr2[i][j];
//        }
//    }
//}
//
//void displayArray(int arr[][2 * MAX_COLS], int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int rows1, cols1, rows2, cols2;
//
//    cout << "Enter the number of rows for the first array: ";
//    cin >> rows1;
//
//    cout << "Enter the number of columns for the first array: ";
//    cin >> cols1;
//
//    cout << "Enter the number of rows for the second array: ";
//    cin >> rows2;
//
//    cout << "Enter the number of columns for the second array: ";
//    cin >> cols2;
//
//    if (rows1 > MAX_ROWS || cols1 > MAX_COLS || rows2 > MAX_ROWS || cols2 > MAX_COLS) {
//        cerr << "Error: Maximum size exceeded for rows or columns." << endl;
//        return 0;
//    }
//
//    int array1[MAX_ROWS][MAX_COLS];
//    int array2[MAX_ROWS][MAX_COLS];
//
//
//    inputArray(array1, rows1, cols1);
//
//
//    inputArray(array2, rows2, cols2);
//
//
//    int resultArray[MAX_ROWS + MAX_ROWS][2 * MAX_COLS];
//
//
//    concatenateArrays(array1, array2, resultArray, rows1, cols1, rows2, cols2);
//
//
//    cout << "Concatenated Array:" << endl;
//    displayArray(resultArray, rows1 + rows2, cols1 + cols2);
//
//    return 0;
//}
