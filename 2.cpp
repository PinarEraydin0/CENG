#include <iostream>
#include <fstream>  
using namespace std;



int main() {
    double width, height;
    cout << "Enter the width : ";
    cin >> width;
    cout << "Enter the height : ";
    cin >> height;
    double area = width * height;
    ofstream file("rectangle_area.txt");
    if (file.is_open()) {
        file << "Area of the rectangle: " << area << endl;
        file.close();
    }
    else {
        std::cout << "Error." << std::endl;
    }
    return 0;
}
