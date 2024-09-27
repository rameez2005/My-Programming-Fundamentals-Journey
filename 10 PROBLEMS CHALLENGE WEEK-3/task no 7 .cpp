//#include <iostream>
//using namespace std;
//
//int main() {
//    string model1, model2, model3;
//    double price1, price2, price3, area1, area2, area3;
//    double ppf1, ppf2, ppf3;
//
//    cout << "Enter the name of model 1: ";
//    cin >> model1;
//    cout << "Enter the base price of " << model1 << ": $";
//    cin >> price1;
//    cout << "Enter the finished area in square feet of " << model1 << ": ";
//    cin >> area1;
//
//    cout << "Enter the name of model 2: ";
//    cin >> model2;
//    cout << "Enter the base price of " << model2 << ": $";
//    cin >> price2;
//    cout << "Enter the finished area in square feet of " << model2 << ": ";
//    cin >> area2;
//
//    cout << "Enter the name of model 3: ";
//    cin >> model3;
//    cout << "Enter the base price of " << model3 << ": $";
//    cin >> price3;
//    cout << "Enter the finished area in square feet of " << model3 << ": ";
//    cin >> area3;
//
//    ppf1 = price1 / area1;
//    ppf2 = price2 / area2;
//    ppf3 = price3 / area3;
//
//    cout << "Price per square foot of " << model1 << ": $" << ppf1 << endl;
//    cout << "Price per square foot of " << model2 << ": $" << ppf2 << endl;
//    cout << "Price per square foot of " << model3 << ": $" << ppf3 << endl;
//
//    if (ppf1 <= ppf2 && ppf1 <= ppf3) {
//        cout << model1 << " has the least price per square foot." << endl;
//    }
//    if (ppf2 <= ppf1 && ppf2 <= ppf3) {
//        cout << model2 << " has the least price per square foot." << endl;
//    }
//    if (ppf3 <= ppf1 && ppf3 <= ppf2) {
//        cout << model3 << " has the least price per square foot." << endl;
//    }
//    system("pause");
//
//    return 0;
//}