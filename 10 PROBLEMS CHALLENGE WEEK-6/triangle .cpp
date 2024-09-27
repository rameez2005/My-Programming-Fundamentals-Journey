#include<iostream>
using namespace std;
int main()
{
	int angle1 , angle2 , angle3 , sum ;
	cout << "ENTER THE  ANGLE 1 " << endl;// Print
	cin >> angle1;// input the angle1
	cout << "ENTER THE  ANGLE 2 " << endl;// Print
	cin >> angle2;// input the angle2
	cout << "ENTER THE  ANGLE 3 " << endl;// Print
	cin >> angle3;// input the angle3
	sum = angle1 + angle2 + angle3;
	if (sum == 180)
		cout << "TRIANGLE IS VALID" << endl;
	else cout << "TRIANGLE IS NOT VALID" << endl;


	system("pause");
	return 0;

}
