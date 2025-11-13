#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if number is positive, negative, or zero using if-else
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Check divisibility by 3 or 5 using switch
    int remainder = num % 15;
    switch (remainder) {
        case 0:
            cout << "The number is divisible by both 3 and 5." << endl;
            break;
        case 3:
        case 6:
        case 9:
        case 12:
            cout << "The number is divisible by 3." << endl;
            break;
        case 5:
        case 10:
            cout << "The number is divisible by 5." << endl;
            break;
        default:
            cout << "The number is not divisible by 3 or 5." << endl;
    }
       
    return 0;
}

