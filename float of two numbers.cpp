#include <iostream>
#include <cmath>

int main() {
    float num1, num2;
    
    std::cout << "Enter first floating number: ";
    std::cin >> num1;
    
    std::cout << "Enter second floating number: ";
    std::cin >> num2;

    std::cout << "Addition: " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 * num2 << std::endl;
    std::cout << "Division: " << num1 / num2 << std::endl;
    std::cout << "Modulo: " << fmod(num1, num2) << std::endl;

    return 0;
}
