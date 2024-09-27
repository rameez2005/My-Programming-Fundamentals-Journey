//#include<iostream>
//using namespace std;
//int main() {
//	int x , balance = 50000,withdrawal_amnt,deposit_amnt;
//	cout << "WELCOME TO MEZAN BANK" << endl;
//	cout << " ENTER 1 TO CHECK BALANCE \n ENTER 2 TO DEPOSIT CASH \n ENTER 3 TO WITHDRAW CASH   " << endl;
//	cin >> x;
//	switch (x) {
//	case 1:
//
//		cout << "YOUR BALANCE IS : " << balance << endl;
//		break;
//	case 2:
//		cout << " how much cash you want to deposit : " << endl;
//		cin >> deposit_amnt;
//		balance += deposit_amnt;
//		cout << " NOW YOUR UPDATED BALANCE IS  : " << balance << endl;
//		break;
//	case 3:
//		cout << " how much cash you want to withdraw : " << endl;
//		cin >> withdrawal_amnt;
//		if (withdrawal_amnt > balance)
//			cout << " YOU DONT HAVE ENOUGH MONEY TO WITHDRAW , PLEASE ENTER AN AMOUNT LESS THAN : " << balance << endl;
//		else
//		{
//			balance -= withdrawal_amnt;
//			cout << " TAKE YOUR CASH  " << endl;
//			cout << " NOW YOUR REMAINING BALANCE IS  : " << balance << endl;
//	}
//		break;
//
//
//	}
//
//	system("pause");
//	return 0;
//}