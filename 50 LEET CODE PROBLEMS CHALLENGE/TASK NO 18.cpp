//#include <iostream>
//#include <string>
//using namespace std;
//
//int Lar_index(string arr) {
//    int maxcont = 0, index = 0;
//    int count = 0;
//    int tIndex = 0;
//
//    for (int i = 0; i < arr.length(); i++) {
//        if (arr[i] != ' ') {
//            count++;
//        }
//        else {
//            if (count > maxcont) {
//                maxcont = count;
//                index = tIndex;
//            }
//            count = 0;
//            tIndex = i + 1;
//        }
//    }
//
//
//    if (count > maxcont) {
//        maxcont = count;
//        index = tIndex;
//    }
//
//    return index;
//}
//
//int main() {
//    string arr;
//    cout << "Enter the string: ";
//    getline(cin, arr);
//    cout << "the largest word starts at index : " << Lar_index(arr) << endl;
//
//    system("pause");
//    return 0;
//}
