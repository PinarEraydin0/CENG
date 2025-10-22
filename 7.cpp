#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void searchStringInFile(const string& filename, const string& searchStr) {
    ifstream file(filename);

    if (file.is_open()) {
        int count = 0;
        string line;

        while (getline(file, line)) {
            size_t pos = 0;
            while (true) {
                pos = line.find(searchStr, pos);
                if (pos == string::npos) break;
                count++;
                pos += searchStr.size();
            }
        }

        cout << "Total occurrences found: " << count << endl;
    }
    else {
        cout << "Error: Could not open the file!" << endl;
    }
}

int main() {
    string filename, searchStr;

    cout << "Enter file name: ";
    getline(cin, filename);

    cout << "Enter the string to search for: ";
    getline(cin, searchStr);

    searchStringInFile(filename, searchStr);

    return 0;
}



