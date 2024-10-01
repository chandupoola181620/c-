#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
      
    int left = 0, right = str.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    cout << (isPalindrome ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
