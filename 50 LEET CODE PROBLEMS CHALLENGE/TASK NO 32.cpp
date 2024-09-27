//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//	int counter = 0;
//	while(counter<10){
//	int age=0 , roll=0 , q1=0 ,q2=0 ,q3 =0;
//	string name , sp= "    ";
//	char choice;
//	cout << "\n\n PRESS  Y  TO ENTER THE DATA \n PRESS  S  TO SAVE THE DATA  \n ";
//	cin >> choice;
//	switch (choice) {
//	case'Y':
//	case 'y':
//	{
//		ofstream file("studentdata.txt", std::ios::app);
//		if (file.is_open()) {
//			file << endl;
//			cout << " enter the name of student \n ";
//			cin >> name;
//			file << name;
//			cout << " enter the AGE of student \n ";
//			cin >> age;
//			file << sp;
//			file <<  age ;
//			file << '-';
//			cout << " enter the ROLL NO  of student \n ";
//			cin >> roll;
//			file << roll ;
//			file <<  sp;
//			cout << " enter the marks in quiz 1  \n ";
//			cin >> q1;
//			file << sp;
//			file <<  q1;
//			cout << " enter the marks in quiz 2  \n ";
//			cin >> q2;
//			file << sp;
//			file <<  q2;
//			cout << " enter the marks in quiz 3  \n ";
//			cin >> q3;
//			file << sp;
//			file <<  q1;
//			file << endl;
//			file.close();
//			counter++;
//			break;
//		}
//
//	}
//	case 's':
//	case 'S':
//	{
//		cout << " \n\nTHE DATA HAS BEEN SUCCESFULLY SAVED   \n ";
//		        system("pause");
//				return 0;
//	}
//
//
//	}
//
//	}
//	system("pause");
//	return 0;
//}