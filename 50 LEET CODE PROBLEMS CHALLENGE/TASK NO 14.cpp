////#include <iostream>
//using namespace std;
//
//void areaRECT(int& area, int l, int w) {
//    area = l * w;
//}
//
//void areaCIRC(float r, float& area) {
//    const float pi = 3.1416;
//    area = pi * (r * r);
//}
//
//void areaSQR(int& area, int l) {
//    area = l * l;
//}
//
//int main() {
//    cout << " ENTER 1 to calculate AREA OF RECTANGLE:\n";
//    cout << " ENTER 2 to calculate AREA OF CIRCLE:\n";
//    cout << " ENTER 3 to calculate AREA OF SQUARE:\n";
//    int x;
//    cin >> x;
//
//    switch (x) {
//    case 1: {
//        int l, w, area = 0;
//        cout << " ENTER THE LENGTH OF RECTANGLE:";
//        cin >> l;
//        cout << " ENTER THE WIDTH OF RECTANGLE:";
//        cin >> w;
//        areaRECT(area, l, w);
//        cout << " THE AREA OF RECTANGLE IS :" << area << endl;
//        break;
//    }
//    case 2: {
//        float r, a = 0.00;
//        cout << " ENTER THE RADIUS OF CIRCLE:";
//        cin >> r;
//        areaCIRC(r, a);
//        cout << " THE AREA OF CIRCLE IS :" << a << endl;
//        break;
//    }
//    case 3: {
//        int q, ar = 0;
//        cout << " ENTER THE LENGTH OF SIDE:";
//        cin >> q;
//        areaSQR(ar, q);
//        cout << " THE AREA OF SQUARE IS :" << ar << endl;
//        break;
//    }
//    default:
//        cout << "Invalid choice." << endl;
//    }
//
//    system("pause");
//    return 0;
//}