//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	cout << "ENTER THE LIMIT TO FIND THE TRIPLETS :\n ";
//	int limit=0,k=3,j=4,l=5;
//	cin >> limit;
//	cout << " THE TRIPLETS UP TO  "<<limit<<"ARE :\n";
//
//	for (int i = 0; i < limit; i++) {
//		bool x=1;
//		while (x){
//			int count = 0;
//			if (((k*k) + (j*j)) == (l*l)) {
//
//				cout << "(" << k << "," << j << "," << l << ")" << endl;
//				x = 0;
//				break;
//			}
//			else {
//				k++;
//				count++;
//				if (count % 2 == 0 && count != 0)
//					j++;
//				if (count % 3 == 0 && count != 0)
//					l++;
//
//			}
//		}
//		k++;
//		j++;
//		l++;
//	}
//	
//	system("pause");
//	return 0;
//}