#include <iostream>

using namespace std;

void checkIn(float n1, float n2) {
    if (n1 > n2) {
        cout << "Digit " << n1 << " is larger than " << n2 << "." << endl;
    } else if (n1 == n2) {
        cout << "Digit " << n1 << " is the same as " << n2 << "." << endl;
    } else {
        cout << "Digit " << n1 << " is smaller than " << n2 << "." << endl;
    }
}

    int main() {
        float num1;
        float num2;

        cout << "Write two digits of your choice: " << endl;
        cin >> num1 >> num2;
        checkIn(num1, num2);
        return 0;
}