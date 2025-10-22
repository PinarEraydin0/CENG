#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sample.txt");

    int charCount = 0;
    char ch;

    if (file.is_open()) {
        cout << "Reading characters from file..." << endl;

        while (file.get(ch)) {
            charCount++;
        }

        file.close();
        cout << "Total number of characters: " << charCount << endl;
    }
    else {
        cerr << "Error" << endl;
    }

    return 0;
}
