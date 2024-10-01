#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

double factorial(double n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int intNum;
    double floatNum;

    cout << "Enter an integer: ";
    cin >> intNum;
    cout << "Factorial of " << intNum << " is " << factorial(intNum) << endl;

    cout << "Enter a floating-point number: ";
    cin >> floatNum;
    cout << "Factorial of " << floatNum << " is " << factorial(floatNum) << endl;

    return 0;
}
