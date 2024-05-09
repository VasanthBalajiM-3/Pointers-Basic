#include <iostream>
using namespace std;

void printnum(int w) {
    cout << "The number passed is: " << w << endl;
}

int main() {
    int n = 5;
    int *ptr2 = &n;
    printnum(*ptr2);
}