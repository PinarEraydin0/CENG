#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (source && destination) {
        char ch;
        while (source.get(ch)) {
            destination.put(ch);
        }

        cout << "File copied " << endl;
    }
    else {
        cout << "Error: Could not open source or destination file." << endl;
    }

    return 0;
}

