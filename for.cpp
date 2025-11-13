#include <iostream>
using namespace std;

int main() {
    // Print numbers from 1 to 10
    cout << "Numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Print even numbers from 1 to 20
    cout << "Even numbers from 1 to 20:" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

