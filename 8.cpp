#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("numbers.txt");
    ofstream out("average.txt");

    if (!in) {
        cout << "Could not open numbers.txt" << endl;
    }
    else if (!out) {
        cout << "Could not open average.txt" << endl;
    }
    else {
        double x, sum = 0;
        int count = 0;

        while (in >> x) {
            sum += x;
            count++;
        }

        if (count > 0) {
            double avg = sum / count;
            cout << "Average: " << avg << endl;
        }
        else {
            cout << "No numbers found in the file." << endl;
        }
    }

    return 0;
}




