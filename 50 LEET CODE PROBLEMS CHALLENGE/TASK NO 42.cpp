//#include<iostream>
//using namespace std;
//int main()
//{
//	const int N = 10;
//	int k,rotated[N];
//	int arr[N] = { 1,3,5,4,9,8,2,6,7,10};
//	cout << "enter positions  to shift: \n";
//	cin >> k;
//	if (k>N)
//	{
//		cout << "ERRORRRR !!!!!  \n";
//
//	}
//	else
//	{
//		for (int i = 0; i < N; i++)
//		{
//			rotated[i]= arr[(i-k+N)%N];
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << rotated[i]<<"  ";
//
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}