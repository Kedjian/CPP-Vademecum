#include <iostream>

using namespace std;

void additionFunction(float n1, float n2) {
    cout << "Addition result: " << endl;
    cout << n1 << " + " << n2 << " = " << n1 + n2;
}

void subtractionFunction(float n1, float n2) {
    cout << "Subtraction result: " << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2;
}

void multiplicationFunction(float n1, float n2) {
    cout << "Multiplication result: " << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2;
}

void dividingFunction(float n1, float n2) {
    cout << "Dividing result: " << endl;
    cout << n1 << " / " << n2 << " = " << n1 / n2;
}

int main() {
    char oper;
    float num1, num2;

    cout << "Select a programme operator (+, -, *, /): " << endl;
    cin >> oper;
    cout << "Enter two digits: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            additionFunction(num1, num2);
        case '-':
            subtractionFunction(num1, num2);
        case '*':
            multiplicationFunction(num1, num2);
        case '/':
            dividingFunction(num1, num2);
        default:
            cout << "Error! The operator is not correct.";
            break;
    }
    return 0;
}

