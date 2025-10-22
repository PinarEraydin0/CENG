#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream file("sample.txt");
	if (file.is_open()) {
		file << "Hello, World!" << endl;
		file.close();
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}
