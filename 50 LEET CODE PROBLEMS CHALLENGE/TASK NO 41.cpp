//#include <iostream>
//#include <iomanip>
//using namespace std;
//int days(int month) {
//    if (month == 4 || month == 6 || month == 9 || month == 11)
//        return 30;
//    else if (month == 2)
//        return 28;
//    else
//        return 31;
//}
//
//void calender(int month) {
//
//    int firstDay = 1;
//
//
//    cout << " Sun Mon Tue Wed Thu Fri Sat\n";
//
//
//    for (int i = 0; i < firstDay; ++i)
//        cout << setw(4) << " ";
//
//
//    for (int day = 1; day <= days(month); ++day) {
//        cout << setw(4) << day;
//
//        if ((firstDay + day) % 7 == 0 || day == days(month))
//            cout << "\n";
//    }
//}
//
//int main() {
//    int month;
//
//
//    cout << "  Enter month : ";
//    cin >> month;
//
//
//    calender(month);
//    system("pause");
//    return 0;
//}