//#include<iostream>
//
//int main() {
//	int olvl, ap, tem, rlvl;
//	std::cout << "enter the oxygen level \n";
//	std::cin >> olvl;
//	std::cout << "enter the atmospheric pressure \n";
//	std::cin >> ap;
//	std::cout << "enter the temprature \n";
//	std::cin >> tem;
//	std::cout << "enter the radiation level \n";
//	std::cin >> rlvl;
//	// oxygen level
//	if (olvl < 20) {
//		std::cout << "it is an emergency , immidiately increase oxygen level \n";
//	}
//	else if (olvl >= 20 && olvl <= 30)
//		std::cout << "additional oxygen suuply should be provided \n";
//	else if (olvl > 30)
//		std::cout << "the situation is stable \n";
//	// atmospheric pressure
//	if (ap > 100) {
//		std::cout << "it is an emergency , immidiately decrease pressure \n";
//	}
//	else if (ap < 70)
//		std::cout << "it may lead to oxygen loss , adjustments should be done \n";
//	else if (ap <= 100&& ap >= 70)
//		std::cout << "the pressure is in safe range \n";
//	// temprature 
//	if (tem < -50) {
//		std::cout << "it is risk of freezing equipment heating should be provided \n";
//	}
//	else if (tem >50)
//		std::cout << "it is risk of overheating equipment cooling should be provided \n";
//	else if (tem <= 50 && tem >= -50)
//		std::cout << "temprature is in acceptable range  \n";
//	// radiation level
//	if (rlvl>100) {
//		std::cout << "radiations level are too high precautions should be made \n";
//	}
//	else if (tem <50)
//		std::cout << "there is no problem with radiations \n";
//
//	system("pause");
//	return 0;
//}