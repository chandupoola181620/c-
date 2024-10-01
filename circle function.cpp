#include <iostream>
#define PI 3.14

float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    std::cout << "Area: " << areaOfCircle(radius) << std::endl;
    return 0;
}
