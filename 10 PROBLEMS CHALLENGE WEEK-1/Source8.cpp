#include<iostream>
using namespace std;
int main() {
	int cokies, cokies_inbox, box_incont;
	int boxes, containers, leftbox,leftcokies;
	cout << "enter the number of total cookies" << endl;
	cin >> cokies;
	boxes = (cokies / 24);
	leftcokies = cokies % 24;
	containers = (boxes / 75);
	leftbox = boxes % 75;
	cout << "the total number of boxes are  " << boxes << "  and containers are  " << containers << endl;
	cout << "left over boxes are  " << leftbox << "  and  left cokies are  " << leftcokies << endl;
	system("pause");
	return 0;
}