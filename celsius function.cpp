#include <iostream>
using namespace std;
float celsiusToFahrenheit(float c) {
    return (c * 9/5) + 32; 
}
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5/9;
}
int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    cout << temp << "C = " << celsiusToFahrenheit(temp) << "F\n";
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    cout << temp << "F = " << fahrenheitToCelsius(temp) << "C\n";
    return 0;
}
