//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 100;
//int arr[N];
//void input(int n) {
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//}
//void max_count(int arr[], int n, int t)
//{
//	int Tcount = 0, count = 1, max = 0, index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == t)
//			Tcount++;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//				if (count >= max)
//				{
//					max = count; count = 0;
//					index = i;
//				}
//			}
//
//
//		}
//	}
//	cout << "Test case " << t << " is occurred " << Tcount << " times\n";
//	cout << "Most occured number in array of size n is: " << arr[index] << " occured "
//		<< max + 1 << " times " << endl;
//}
//int main()
//{
//	int testcases, n, t;
//	cout << "Enter  number of  test cases " << endl;
//	cin >> testcases;
//	for (int i = 0; i < testcases; i++)
//	{
//		cout << "Enter size of first test case: ";
//		cin >> n;
//		cout << "Enter test case: "  ;
//		cin >> t;
//		cout << "Enter elements for first test case: \n";
//		input(n);
//		max_count(arr, n, t);
//
//	}
//
//	system("pause");
//	return 0;
//}
