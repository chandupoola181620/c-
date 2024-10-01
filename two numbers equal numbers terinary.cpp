#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    (num1 == num2) ? cout << "The numbers are equal." : cout << "The numbers are not equal.";
    
    return 0;
}
