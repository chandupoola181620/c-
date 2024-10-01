#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "Largest: " << largest << endl;
    return 0;
}
