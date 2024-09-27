//#include <iostream>
//using namespace std;
//
//int main() {
//	char arr[30];
//	cout << "enter the characters :";
//	for (int i = 0; i < 30; i++) {
//		cin >> arr[i];
//	}
//	int x=30 , rep=0;
//	for (int i = 0; i < x; i++) {
//		int count=1;
//		for (int j = i; j < 30; j++) {
//			if (arr[i] == arr[j+1]) {
//				count++;
//				x--;
//			
//			}
//
//		}
//		
//		rep += 1;
//		cout << " the character " << arr[i] << " occours " << count << " times " << endl;
//	}
//	cout << " there are  " << rep << " unique characters in the data " << endl;
//	
//
//	system("pause");
//	return 0;
//}