//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main()
//{
//    ifstream file;
//    string x;
//    char ch;
//    file.open("para.txt");
//
//    if (!file)
//    {
//        cout << "not opened:\n";
//        system("pause");
//        return 0;
//    }
//    else {
//        int count = 0, spaces = 0, greater = 0;
//        while (file.get(ch))
//        {
//            x += ch;
//        }
//        cout << "sample text in file : " << x << endl;
//        int size = x.size();
//        string temp = x;
//        for (int i = 0; i < size; i++)
//        {
//            if (x[i] != ' ')
//            {
//                count++;
//            }
//            else
//            {
//                spaces++;
//                if (count > 4)
//                {
//                    greater++;
//                    count = 0;
//                }
//
//            }
//        }
//        reverse(temp.begin(), temp.end());
//        cout << "big words :" << greater << endl;
//        cout << "spaces: " << spaces << endl;
//        cout << "reverse: " << temp << endl;
//    }
//
//    system("pause");
//    return 0;
//}
