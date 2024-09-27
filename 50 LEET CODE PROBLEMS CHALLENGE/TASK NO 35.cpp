//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//string write(string data, int key) {
//    ofstream file("SECRET.txt");
//    if (!file)
//    {
//        cout << "cannot open file ..... \n";
//        system("pause");
//        return "";
//    }
//    else {
//        cout << "writing data to filee \n";
//        int length = data.size();
//        string encrypt;
//        for (int i = 0; i < length; i++)
//        {
//            encrypt += data[i] + key;
//        }
//        file << encrypt;
//        file.close();
//        return "successs... \n";
//    }
//}
//
//string read() {
//    string data;
//    fstream in;
//    in.open("SECRET.txt");
//    if (!in)
//    {
//        cout << "not opened \n";
//        system("pause");
//        return ""; 
//    }
//    else {
//        in >> data;
//        return data;
//    }
//}
//
//int main()
//{
//    string DATA = " ";
//    int key;
//    DATA = read();
//    cout << "data before changing: " << DATA << endl;
//    cout << "enter a key you want to add in each char : \n ";
//    cin >> key;
//    cout << write(DATA, key) << endl;
//    system("pause");
//    return 0;
//}
