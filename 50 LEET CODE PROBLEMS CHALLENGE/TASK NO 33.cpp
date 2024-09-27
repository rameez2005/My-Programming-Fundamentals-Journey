//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//const int ROW = 4;
//const int COL = 4;
//
//int main() {
//    int mat[ROW][COL];
//
//    ifstream file("2dmatrix.txt");
//
//    if (!file.is_open()) {
//        cerr << "Error opening the file!" << endl;
//        return 0;
//    }
//
//    cout << "Reading the matrix from the file..." << endl;
//
//    for (int i = 0; i < ROW; i++) {
//        for (int j = 0; j < COL; j++) {
//           file >> mat[i][j];
//        }
//    }
//
//   file.close();
//
//   
//    cout << "Matrix read from file:" << endl;
//    for (int i = 0; i < ROW; i++) {
//        for (int j = 0; j < COL; j++) {
//            cout << mat[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//   
//    int sum = 0;
//    for (int i = 0; i < ROW; i++) {
//        sum += mat[i][i];
//    }
//
//   
//    cout << "Sum of diagonal entries: " << sum << endl;
//
//    return 0;
//}
//
