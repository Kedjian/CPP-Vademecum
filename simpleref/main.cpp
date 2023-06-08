#include <iostream>
using namespace std;

char abc;

char& test();

int main() {

    test() = 'a';
    cout << abc;
    return 0;
}

char& test() {
    return abc;
}
