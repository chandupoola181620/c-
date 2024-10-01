#include <iostream>
#include <string>
using namespace std;
class Car {
public:
    string brand;
    
    Car(string b) : brand(b) {
        cout << "Creating a " << brand << " car." << endl;
    }

    ~Car() {
        cout << "Destroying the " << brand << " car." << endl;
    }
};

int main() {
    Car myCar("Toyota");
    return 0;
}
