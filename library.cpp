#include "library.h"
#include <cstring>
#include <cstdlib>

int mystrcmp(const char* str1, const char* str2) {
    return std::strcmp(str1, str2);
}

int StringToNumber(char* str) {
    return std::atoi(str);
}

char* NumberToString(int number) {
    char* result = new char[20]; 
    sprintf_s(result, 20, "%d", number);
    return result;
}

char* Uppercase(char* str) {
    int length = std::strlen(str);
    for (int i = 0; i < length; ++i) {
        str[i] = std::toupper(str[i]);
    }
    return str;
}

char* Lowercase(char* str) {
    int length = std::strlen(str);
    for (int i = 0; i < length; ++i) {
        str[i] = std::tolower(str[i]);
    }
    return str;
}

char* mystrrev(char* str) {
    int length = std::strlen(str);
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        std::swap(str[i], str[j]);
    }
    return str;
}
