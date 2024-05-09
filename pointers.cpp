// Ways pointers can be used in C++ for providing function parameters
#include <iostream>
using namespace std;

// Way 1: Pass by value, here we are passing by the value by dereferencing the pointer
// Way 2: Pass by value, here we are passing by the value directly
void printnum1(int w) {
    cout << "The number passed is: " << w << endl;
}

// Way 3: Pass by reference, here we are passing the address of the variable and in formal parameter we are pointing the address of the variable
void printnum2(int *w) {
    cout << "The number passed is: " << *w << endl;
}

// Way 4: Pass by reference, here we are passing the address of the variable and in formal parameter we are referencing the variable to a new address
void printnum3(int &s) {
    cout << "The number passed is: " << s << endl;
}

int main() {
    int n = 5;
    int *ptr2 = &n;
    printnum1(*ptr2); // Way 1
    printnum1(n); // Way 2
    printnum2(ptr2); // Way 3
    printnum2(&n);
    printnum3(n); // Way 4

    return 0;
}