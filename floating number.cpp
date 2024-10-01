#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float number;
    cout << "Enter a floating number: ";
    cin >> number;

    int roundedFloor = floor(number);
    int roundedCeil = ceil(number);

    cout << "Rounded down (floor): " << roundedFloor << endl;
    cout << "Rounded up (ceil): " << roundedCeil << endl;

    return 0;
}
