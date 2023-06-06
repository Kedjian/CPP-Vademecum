#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
    cout << "Enter a non-negative digit: ";
    int num, result;
    cin >> num;

    result = fibonacci(num);
    cout << result;
}

int fibonacci(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;

    return fibonacci(num - 1) + fibonacci(num - 2);
}