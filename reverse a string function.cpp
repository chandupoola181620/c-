#include<iostream>	
#include<string>
using namespace std;
string reversestring(const string& str) {
    return string(str.rbegin(), str.rend());
}
int main() {
    string input = "srinu";
    cout << reversestring(input) <<endl;
    return 0;
}
