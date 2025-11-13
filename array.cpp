#include <iostream>
using namespace std;

int main() {
    int numbers[5];   // Array to store 5 integers
    int sum = 0;      // Variable to store the sum
    int largest;      // Variable to store the largest number

    // Input 5 integers
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Initialize largest with the first element
    largest = numbers[0];

    // Loop to calculate sum and find largest number
    for (int i = 0; i < 5; i++) {
        sum += numbers[i]; // Add each element to sum
        if (numbers[i] > largest) {
            largest = numbers[i]; // Update largest if a bigger number is found
        }
    }

    // Display results
    cout << "\nSum of all elements = " << sum << endl;
    cout << "Largest number = " << largest << endl;

    return 0;
}
