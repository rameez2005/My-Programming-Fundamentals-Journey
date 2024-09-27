//#include<iostream>
//#include<string>
//using namespace std;
//const int row = 12, col = 2;
//void get(int arr[][col]) {
//	for (int i = 0; i < row; i++)
//	{
//		cout << "Enter highest and then lowest temp of  month: " << i + 1 << endl;
//		for (int j = 0; j < col; j++)
//		{
//			cin >> arr[i][j];
//
//		}
//	}
//}
//int avghigh(int arr[][col])
//{
//	int avg = 0, sum = 0, j = 0;
//	for (int i = 0; i < row; i++)
//	{
//		sum += arr[i][j];
//	}avg = sum / row;
//	return avg;
//}int avglow(int arr[][col])
//{
//	int avg = 0, sum = 0, j = 1;
//	for (int i = 0; i < row; i++)
//	{
//		sum += arr[i][j];
//	}avg = sum / row;
//	return avg;
//}
//int indexhighest(int arr[][col])
//{
//	int index = 0, j = 0, max = 0;
//	for (int i = 0; i < row; i++)
//	{
//		if (arr[i][j] > max)
//		{
//			max = arr[i][j];
//			index = i;
//		}
//
//	}
//	return index;
//}int indexlowest(int arr[][col])
//{
//	int index = 0, j = 1, max = 0;
//	for (int i = 0; i < row; i++)
//	{
//		if (arr[i][j] > max)
//		{
//			max = arr[i][j];
//			index = i;
//		}
//
//	}
//	return index;
//}
//int main()
//{
//	int arr[row][col];
//	get(arr);
//	cout << "Averageg high temp of year: " << avghigh(arr) << endl;
//	cout << "Averageg low temp of year: " << avglow(arr) << endl;
//	cout << "Index of highest temp of year: " << indexhighest(arr) << endl;
//	cout << "Index of lowest temp of year: " << indexlowest(arr) << endl;
//	system("pause");
//	return 0;
//}
