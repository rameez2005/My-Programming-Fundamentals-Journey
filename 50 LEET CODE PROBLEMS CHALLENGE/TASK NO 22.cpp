//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//string find( string  filename) {
//    
//    string line , x;
//    fstream file ;
//    file.open(filename);
//    if (file.is_open()) {
//        while (!file.eof())
//        {
//            getline(file , line);
//             x += "\n" + line;
//        }
//    }
//   return x;
//}
//
//
//void store(  string filename , string str ) {
//
//    ofstream filee(filename, std::ios::app);
//    filee <<endl<< str << endl;
//    filee.close();
//
//}
//
//int main() {
//    string x,n;
//    cout << "Enter the file name : ";
//    cin >> x;
//    x += ".txt";
//    cout << "the file contains the following data : \n " << find(x);
//    cout << endl << endl << endl;
//    cout << "Enter the file name  in which you want  to store this data\n : ";
//    cin >> n;
//    n += ".txt";
//    store( n, find(x));
//    cout <<" the data is succesfully stored \n\n ";
//    system("pause");
//    return 0;
//}
