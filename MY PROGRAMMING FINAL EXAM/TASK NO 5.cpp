#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	string data;
	ifstream file("document.txt",ios::app);
	if (file.is_open()) {
		while (!file.eof()) {
			string str = " ";
			 getline(file,str);
			 data += str;
        }
	}
	file.close();
	// finding  words to replace 

	/*int ds = data.length();
	cout << "which word do you want to find \n";
		string w;
	cin >> w;
	int ws = w.length();
	int foundindex = 0 ;
	for (int i = 0; i < ds; i++) {
		int count = 0;
		if (w[i] == data[i]) {
			foundindex = i;
			for(int j=i;j<i+ws;j++){
				if (w[j] != data[j]) {
					break;
				}
				count++;				
			}


		}
		if (count == ws) {
			cout << " word found  \n";
			break;
	}

	}
*/




// printing in new file 



	ofstream x("updated_doc.txt", ios::app);
	if (x.is_open()) {
		x << data;
		x << endl;
	}
	x.close();
	
		

	system("pause");
	return 0;
}