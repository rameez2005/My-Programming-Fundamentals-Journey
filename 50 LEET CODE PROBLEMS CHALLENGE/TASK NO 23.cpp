//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void encrypt(string filename) {
//
//    string line, x;
//    fstream file;
//    file.open(filename);
//    if (file.is_open()) {
//        while (!file.eof())
//        {
//            getline(file, line);
//            x += "\n" + line;
//        }
//    }
//    
//    int size = x.length();
//    ofstream f(filename);
//    if (f.is_open()) {
//        f.clear();
//        for (int i = 0; i < size; i++) {
//            
//            f << static_cast<int>(x[i]);
//
//       }
//    }
//    cout << "THE FILE HAS BEEN SUCCESFULLY ENCRYPTED \n ";
//    file.close();   
//}
//
//
//void decrypt(string filename) {
//    string line, x;
//    fstream file;
//    file.open(filename);
//    if (file.is_open()) {
//        while (!file.eof())
//        {
//            getline(file, line);
//            x += "\n" + line;
//        }
//    }
//
//    int size = x.length();
//    ofstream f(filename);
//    if (f.is_open()) {
//        f.clear();
//        for (int i = 0; i < size; i++) {
//
//            f <<  static_cast<string>(x[i]);
//
//        }
//    }
//    cout << "THE FILE HAS BEEN SUCCESFULLY DECRYPTED \n ";
//    file.close();
//}
//
//int main() {
//    string x, n;
//    cout << "Enter the file name which do you want to Decrypt : ";
//    cin >> x;
//    x += ".txt";
//    decrypt(x);
//
//  /*  cout << "the file contains the following data : \n " << find(x);
//    cout << endl << endl << endl;
//    cout << "Enter the file name  in which you want  to store this data\n : ";
//    cin >> n;
//    n += ".txt";
//    store(n, find(x));
//    cout << " the data is succesfully stored \n\n ";*/
//    system("pause");
//    return 0;
//}
