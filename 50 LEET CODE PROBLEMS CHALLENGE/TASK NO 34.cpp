//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//
//
//int main() {
//    int arr[3][3];
//
//    ifstream file("2dmatrix.txt");
//
//    if (!file.is_open()) {
//        cerr << "Error opening the file!" << endl;
//        return 1;
//    }
//
//    cout << "Reading the data " << endl;
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            file >> arr[i][j];
//        }
//    }
//
//    file.close();
//
//    cout << "matrix read from file:" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    int det = 0;
//    for (int i = 0; i < 3; i++) {
//        det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) -
//            arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) +
//            arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
//    }
//
// 
//    cout << "The determinant of the matrix is: " << det << endl;
//    system("pause");
//    return 0;
//}
