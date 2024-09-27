#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int dicsize = 100;
const char file[] = "dict.txt";


void generateAndStoreDictionary() {
    ofstream file(file);

    if (!file.is_open()) {
        cerr << "Error opening file for writing." << endl;
        exit(EXIT_FAILURE);
    }

    // Seed for randomization
    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < dicsize; ++i) {
        char randomChar = rand() % 26 + 'A'; 
        file << randomChar << " ";

        randomChar = rand() % 26 + 'a'; 
        file << randomChar << " ";
    }

    file.close();
}

void myUpperCase() {
    ifstream file(file);
    char ch;

    cout << "Uppercase Characters: ";
    while (file >> ch) {
        if (isupper(ch)) {
            cout << ch << " ";
        }
    }

    file.close();
    cout << endl;
}


void lowletters() {
    ifstream file(file);
    char ch;

    cout << "Lowercase Characters: ";
    while (file >> ch) {
        if (islower(ch)) {
            cout << ch << " ";
        }
    }

    file.close();
    cout << endl;
}


void updateDictionary() {
    ifstream inFile(file);
    ofstream outFile("temp.txt");
    char oldChar, newChar, ch;

    cout << "Enter the character to update: ";
    cin >> oldChar;
    cout << "Enter the new character: ";
    cin >> newChar;

    while (inFile >> ch) {
        if (ch == oldChar) {
            outFile << newChar << " ";
        }
        else {
            outFile << ch << " ";
        }
    }

    inFile.close();
    outFile.close();

    
    remove(file);
    rename("temp.txt", file);

    cout << "Character updated successfully." << endl;
}


void displayContent() {
    ifstream file(file);
    char ch;

    cout << "Dictionary Content: ";
    while (file >> ch) {
        cout << ch << " ";
    }

    file.close();
    cout << endl;
}


void displayDictionarySize() {
    ifstream file(file);
    char ch;
    int size = 0;

    while (file >> ch) {
        ++size;
    }

    file.close();

    cout << "Dictionary Size: " << size << " characters." << endl;
}

int main() {
    generateAndStoreDictionary();

    int choice;

    do {
        cout << "\nchoose any task :\n1. Uppercase Characters\n2. Lowercase Characters\n"
            << "3. Update Dictionary\n4. Display Content\n5. Dictionary Size\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            myUpperCase();
            break;
        case 2:
            lowletters();
            break;
        case 3:
            updateDictionary();
            break;
        case 4:
            displayContent();
            break;
        case 5:
            displayDictionarySize();
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}