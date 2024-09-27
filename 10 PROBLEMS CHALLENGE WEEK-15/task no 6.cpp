//#include<iostream>
//
//#include<fstream>
//
//using namespace std;
//
//int main()
//
//{
//
//	ofstream my_output_file;
//
//	char ch;
//
//	my_output_file.open("myData.txt");
//
//	if (!(my_output_file.is_open()))
//
//	{
//
//		cout << "File cannot open.";
//
//		return 0;
//
//	}
//
//	cout << "Writing contents to file: \n";
//
//	do
//
//	{
//
//		ch = getchar();
//
//		my_output_file << ch;
//
//	} while (ch != '.');
//
//	my_output_file.close();
//
//	system("pause");
//	return 0;
//}