//#include <iostream>
//
//int main() {
//    int n, i, j;
//
//    std::cout << "Enter the number of rows: ";
//    std::cin >> n;
//
//    // Upper part of the diamond
//    for (i = 1; i <= n; i++) {
//        // Print spaces
//        for (j = 1; j <= n - i; j++) {
//            std::cout << " ";
//        }
//
//        // Print stars
//        for (j = 1; j <= 2 * i - 1; j++) {
//            std::cout << "*";
//        }
//
//        std::cout << std::endl;
//    }
//
//    // Lower part of the diamond
//    for (i = n - 1; i >= 1; i--) {
//        // Print spaces
//        for (j = 1; j <= n - i; j++) {
//            std::cout << " ";
//        }
//
//        // Print stars
//        for (j = 1; j <= 2 * i - 1; j++) {
//            std::cout << "*";
//        }
//
//        std::cout << std::endl;
//    }
//
//    return 0;
