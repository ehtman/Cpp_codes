//1) Program Using Function (Pass by Value)
#include <iostream>
using namespace std;

// Function Declaration
float area(float r); 

int main() {
    float radius;

    cout << "Enter radius of circle: ";
    cin >> radius;

    // Function Call
    cout << "Area of circle = " << area(radius);

    return 0;
}

// Function Definition
float area(float r) {
    return 3.14 * r * r;
}

