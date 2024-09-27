//#include<iostream>
//
//using namespace std;
//int main() {
//	double width, height, left_margin,right_margin, top_margin, bottom_margin,point_size;
//	char spacing;
//	int character_perline, line_perpage;
//	cout << "enter the height   " << endl;
//	cin >> height;
//	cout << "enter the width  " << endl;
//	cin >> width;
//	cout << "enter the left_margin   " << endl;
//	cin >> left_margin;
//	cout << "enter the right_margin   " << endl;
//	cin >> right_margin;
//	cout << "enter the top_margin   " << endl;
//	cin >> top_margin;
//	cout << "enter the bottom_margin   " << endl;
//	cin >> bottom_margin;
//	cout << "enter the point_size   " << endl;
//	cin >> point_size;
//	cout << "Enter d for double-spaced, s for single-spaced: " << endl;
//	cin >> spacing;
//	double usable_width = width - (left_margin + right_margin);
//	double usable_height = height - (bottom_margin + top_margin);
//
//	character_perline = (usable_width * (  72/ point_size));
//	line_perpage= (usable_height * (72 / point_size));
//	if (spacing == 'd') 
//		line_perpage /= 2;
//	cout << "The number of characters per line is " << character_perline << endl;
//	cout << "The number of lines per page is " << line_perpage << endl;
//
//	system("pause");
//	return 0;
//
//}