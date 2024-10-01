#include <iostream>
using namespace std;
int max(int a, int b) {
    return (a > b) ? a : b;
}
float max(float a, float b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}
int main() {
    int int1 = 10, int2 = 20;
    float float1 = 10.5, float2 = 20.5;
    char char1 = 'A', char2 = 'B';

    cout << "Maximum of integers: " << max(int1, int2) << endl;
    cout << "Maximum of floating point numbers: " << max(float1, float2) << endl;
    cout << "Maximum of characters: " << max(char1, char2) << endl;

    return 0;
}
