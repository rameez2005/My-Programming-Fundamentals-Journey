//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//
//
//	int i = 1, n, space = 1, row;
//	cout << "enter the number of rows you want " << endl;
//
//	cin >> n;
//	int num = n;
//
//	for (row = 1; row <= num; row++)
//	{
//
//		cout << setw(space);
//		i = row;
//		for (int c = i; c <= num; c++)
//		{
//
//			cout << i << " ";
//			i++;
//		}
//		cout << endl;
//		space++;
//
//
//	}
//	space = space - 2;
//	for (row = num; row > 1; row--)
//	{
//
//		cout << setw(space);
//		i = row - 1;
//		for (int c = i; c <= num; c++)
//		{
//
//			cout << i << " ";
//			i++;
//		}
//		cout << endl;
//
//		space--;
//
//
//
//	}
//
//
//
//	system("pause");
//
//	return 0;
//
//}