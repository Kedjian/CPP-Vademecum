#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    char oper;
    float num1, num2;

    cout << "Select a programme operator (+, -, *, /): " << endl;
    cin >> oper;
    cout << "Enter two digits: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << "Addition result: " << endl;
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << "Subtraction result: " << endl;
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << "Multiplication result: " << endl;
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << "Dividing result: " << endl;
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! The operator is not correct.";
            break;
    }
    return 0;
}