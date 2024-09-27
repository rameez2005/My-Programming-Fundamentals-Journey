//#include<iostream>
//#include<string>
//using namespace std;
//const int row = 3;
//const int col = 3;
//void MAX_MIN(int r, int c, int arr[][col])
//{
//	int max = arr[r][0], min = arr[0][c];
//	for (int i = 0; i < row; i++)
//	{
//		if (arr[r][i] > max)
//			max = arr[r][i];
//	}
//	cout << "max element in the row is : " << max << endl;
//	for (int i = 0; i < col; i++)
//	{
//		if (arr[i][c] < min)
//			min = arr[i][c];
//	}
//	cout << "minimum element in the column is : " << min << endl;
//}
//int main()
//{
//	int r, c, arr[row][col];
//	cout << "enter array 3 by 3: \n";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << "enter row you want to search: " << endl;
//	cin >> r;
//	cout << "enter column you want to search: " << endl;
//	cin >> c;
//	if (r < row && c < col)
//		MAX_MIN(r, c, arr);
//
//	system("pause");
//	return 0;
//}