#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    ofstream file("names.log", ios::app);
    if (file.is_open()) {
        file << firstName << " " << lastName << endl;
        file.close();
    }
    else {
        cout << "Error opening the file." << endl;
    }
    return 0;
}

