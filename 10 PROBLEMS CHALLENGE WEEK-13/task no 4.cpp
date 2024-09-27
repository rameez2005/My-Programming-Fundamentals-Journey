#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string input;
	cout << "Enter a string to find largest word: ";
	getline(cin, input);
	string word, largestword;
	int starting = 0, spaceplace;
	while ((spaceplace = input.find(' ', starting)) != string::npos) {
		word = input.substr(starting, spaceplace - starting);
		if (word.length() > largestword.length()) {
			largestword = word;
		}
		starting = spaceplace + 1;
	}
	word = input.substr(starting);
	if (word.length() > largestword.length()) {
		largestword = word;
	}
	cout << "The largest word is: " << largestword << endl;

	system("pause");
	return 0;
}