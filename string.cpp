#include "string.hpp"

String::String(const char* _str) {
    length = strlen(str) + 1;
    str = new char[length];
    strcpy(str, _str);
}

String::~String() {
    delete[] str;
}

void String::set_str(const char* _str) {
    if(str != nullptr) {
        delete[] str;
        length = 0;
    }
    length = strlen(_str) + 1;
    str = new char[length];
    strcpy(str, _str);
}