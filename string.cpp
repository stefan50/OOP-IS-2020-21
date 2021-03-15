#include "string.hpp"

String::String(const char* _str) {
    str = new char[strlen(_str) + 1];
    strcpy(str, _str);
}

String::~String() {
    delete[] str;
}

void String::set_str(const char* _str) {
    if(str != nullptr) {
        delete[] str;
    }
    str = new char[strlen(_str) + 1];
    strcpy(str, _str);
}

void reverse(String original) {
    original.set_str("as");
}

// String s1("ala");
// String s2 = s1;
// s2.str = s1.str ?? 
// strcpy(s2.str, s1.str);
// String s3;
// s3 = s1;
// s3.operator=(s1);

String::String(const String& other) {
    str = new char[other.size() + 1];
    strcpy(str, other.c_str());
    // strcpy(str, other.str);
}

// this
// this != ДИС
// s3 = s1 // this <-> s3
String& String::operator=(const String& other) {
    if(this != &other) {
        //TODO: delete memory
        //TODO: assign new vars
    }
}