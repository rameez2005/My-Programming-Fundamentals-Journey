//#include <iostream>
//#include<cassert>
//using namespace std;
//int main() {
//	const float R_bpfee = 4.50, R_bsfee = 20.50, R_pc = 7.50, B_bpfee = 15.50, B_bsfee = 75.00, B_pc = 50.00;
//	int account_num, prem_chan, bsc;
//	char c_code;
//	double bill;
//	cout << "enter ac no" << endl;
//	cin >> account_num;
//	cout << "enter user  code" << endl;
//	cin >> c_code;
//	assert(c_code == 'R' || c_code == 'r' || c_code == 'B' || c_code == 'b');
//	cout << "enter PREMIUM channels" << endl;
//	cin >> prem_chan;
//	if (c_code == 'R' || c_code == 'r')
//		bill = (R_bpfee + R_bsfee) + (prem_chan * R_pc);
//	else {
//		cout << "enter the no of basic service connections" << endl;
//		cin >> bsc;
//		if (bsc <= 10)
//		{
//			bill = B_bpfee + (bsc * B_bsfee) + (prem_chan * B_pc);
//		}
//		else
//		{
//			bill = B_bpfee + (bsc * B_bsfee) + ((bsc - 10) * 5.00) + (prem_chan * B_pc);
//		}
//	}
//	cout << "YOUR BILL IS : " << bill << endl;
//	cout << "ACCOUNT NO : " << account_num << endl;
//	system("pause");
//	return 0;
//}