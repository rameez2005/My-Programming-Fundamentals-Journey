//#include<iostream>
//using namespace std;
//// function to deal with power
//int power(int n, int p) {
//	int res = 1;
//	for (int i = 0; i < p; i++)
//		res *= n;
//	return res;
//}
//double evaluatecof(int x, int n, int ar[]) {
//	int result=0;
//
//	for (int i = 0; i < n + 1; i++) {
//
//		result += (ar[i] * power(x , n- i));
//
//	}
//	return result;
//}
//
//int main() {
//	int x, n, ar[1000];
//	cout << "enter the x \n";
//	cin >> x;
//	cout << "enter the N \n";
//	cin >> n;
//	cout << "enter the coeficients \n";
//	for (int i = 0; i < n + 1; i++) {
//		cin >> ar[i];
//	}
//	cout << "THE OUTPUT IS : "<< evaluatecof(x,n,ar)<<endl;
//
//	system("pause");
//	return 0;
//}