#include "library.h"

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    int cmpResult = mystrcmp(str1, str2);
    std::cout << "Comparison Result: " << cmpResult << std::endl;

    char numStr[] = "12345";
    int num = StringToNumber(numStr);
    std::cout << "String to Number: " << num << std::endl;

    int number = 6789;
    char* numString = NumberToString(number);
    std::cout << "Number to String: " << numString << std::endl;
    delete[] numString;

    char str3[] = "lowercase";
    Uppercase(str3);
    std::cout << "Uppercase: " << str3 << std::endl;

    char str4[] = "UPPERCASE";
    Lowercase(str4);
    std::cout << "Lowercase: " << str4 << std::endl;

    char str5[] = "reverse";
    mystrrev(str5);
    std::cout << "Reversed: " << str5 << std::endl;

    return 0;
}
