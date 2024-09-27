//#include <iostream>
//#include <string>
//using namespace std;
//
//int mode(string  arr,int size) {
//    int max=0 ;
//    char tempindex = ' ';
//    for (int i = 0; i < size; i++) {
//        int count = 0;
//        for (int j = i + 1; j < size; j++) {
//            if (arr[i] == arr[j]) {
//                count++;
//            }
//        }
//        if (count > max) {
//            max = count;
//            tempindex = arr[i];
//
//        }
//           
//    }
//   
//    return tempindex;
//}
//
//int main() {
//    string arr;
//    cout << "Enter the string: ";
//    getline(cin, arr);
//    int size = arr.length();
//    cout << "the most occouring element is   : " << mode(arr,size) << endl;
//    system("pause");
//    return 0;
//}
