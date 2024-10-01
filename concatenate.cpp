#include <iostream>
#include <cstring>
using namespace std;

void concatenate(const char* str1, const char* str2) {
    cout << "Concatenated Strings: " << str1 << str2 << endl;
}

void concatenate(const char* arr1, const char* arr2, size_t size1, size_t size2) {
    char* result = new char[size1 + size2 + 1];
    strcpy(result, arr1);
    strcat(result, arr2);
    cout << "Concatenated Character Arrays: " << result << endl;
    delete[] result;
}

int main() {
    const char* string1 = "Hello, ";
    const char* string2 = "World!";
    concatenate(string1, string2);

    const char array1[] = "Good ";
    const char array2[] = "Morning!";
    concatenate(array1, array2, sizeof(array1) - 1, sizeof(array2) - 1);

    return 0;
}
