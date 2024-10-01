#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> number;

    
    while (number < 0) {
        cout << "Please enter a positive integer: ";
        cin >> number;
    }

    while (number > 0) {
        sum += number % 10; 
        number /= 10;       
    }

    cout << "Sum of all digits: " << sum << endl;
    return 0;
}
