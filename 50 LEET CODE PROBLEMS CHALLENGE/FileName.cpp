//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//int main() {
//    std::ifstream file("matrix.txt"); // Open the file in read mode
//    std::vector<std::vector<int>> matrix(4); // Declare a 4x4 matrix with dynamic memory allocation
//    int sum = 0; // Initialize the sum variable to 0
//    std::string line; // Declare a string variable to store each line of the file
//    for (int I = 0; I < 4; I++) { // Loop through the rows of the matrix
//        for (int j = 0; j < 4; j++) { // Loop through the columns of the matrix
//            getline(file, line); // Read each line of the file
//            std::stringstream ss(line); // Convert the line to a string stream
//            int num; // Declare an integer variable to store each number read from the stream
//            ss >> num; // Extract each number from the stream and store it in num
//            matrix[I].push_back(num); // Add each number to the corresponding column of the matrix
//            if (I == j) { // Check if we're on the principal diagonal
//                sum += num; // Add the number to the sum variable if we're on the diagonal
//            }
//        }
//    }
//    std::cout << "Sum of entries on principal diagonal: " << sum << std::endl; // Print the sum of diagonal entries
//    return 0;
//}