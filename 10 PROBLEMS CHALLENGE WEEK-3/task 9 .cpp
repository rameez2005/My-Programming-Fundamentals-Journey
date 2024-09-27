#include <iostream>
#include <string>
using namespace std;

string convertToDigits(string letters) {
    string digits;
    for (int i = 0; i < letters.length(); i++) {
        char ch = letters[i];
        if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'a' || ch == 'b' || ch == 'c') {
            digits += '2';
        }
        else if (ch == 'D' || ch == 'E' || ch == 'F' || ch == 'd' || ch == 'e' || ch == 'f') {
            digits += '3';
        }
        else if (ch == 'G' || ch == 'H' || ch == 'I' || ch == 'g' || ch == 'h' || ch == 'i') {
            digits += '4';
        }
        else if (ch == 'J' || ch == 'K' || ch == 'L' || ch == 'j' || ch == 'k' || ch == 'l') {
            digits += '5';
        }
        else if (ch == 'M' || ch == 'N' || ch == 'O' || ch == 'm' || ch == 'n' || ch == 'o') {
            digits += '6';
        }
        else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's') {
            digits += '7';
        }
        else if (ch == 'T' || ch == 'U' || ch == 'V' || ch == 't' || ch == 'u' || ch == 'v') {
            digits += '8';
        }
        else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z') {
            digits += '9';
        }
        else if (ch >= '0' && ch <= '9') {
            digits += ch;
        }
        else if (ch == ' ' && digits.length() == 3) {  // add hyphen after third digit
            digits += '-';
        }
        // ignore any additional letters after the first seven
        if (digits.length() == 7) {
            break;
        }
    }
    return digits;
}

int main() {
    string letters;
    char choice;
    do {
        cout << "Enter a telephone number expressed in letters: ";
        getline(cin, letters);

        string digits = convertToDigits(letters);
        cout << "The corresponding telephone number in digits is " << digits << endl;

        cout << "Do you want to convert another number? (Y/N) ";
        cin >> choice;
        cin.ignore();  // ignore the newline character left by cin
    } while (toupper(choice) == 'Y');
    system("puase");
    return 0;
}