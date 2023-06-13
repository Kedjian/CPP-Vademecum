#include <iostream>

using namespace std;

void Args(int = 10, float = 5.8, char = 'G');

int main() {
    int num1;
    float num2;
    char abc;

    cout << "Default arguments are: " << endl;
    Args();
    cout << endl;

    cout << "You can overwrite them at any moment. " << endl;
    cout << "To show this, please enter an integer, followed by a float and a character: " << endl;
    cin >> num1 >> num2 >> abc;
    cout << endl;

    cout << "Here are the changed arguments: " << endl;
    Args(num1, num2, abc);
    cout << endl;

    cout << "For example, here only int will be modified: " << endl;
    Args(num1);
    cout << endl;

    cout << "As an additional example, only the char will be modified here: " << endl;
    Args(10, 5.8, abc);
    cout << endl;

    cout << "There could be more examples, but two give a general idea. They'll do.";
}

void Args(int i, float f, char g) {
    cout << i << endl;
    cout << f << endl;
    cout << g << endl;
}