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
// String s3("ala"), s1("ala");
// s3 = s1 // this <-> &s3 
// s3 = s3;
String& String::operator=(const String& other) {
    if(this != &other) {
        if(str != nullptr) {
            delete[] str;
        }
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    return *this;
}

bool String::operator==(const String& other) {
    return strcmp(str, other.str) == 0 ? true : false;
}

// "s" > "aa" 
// "S" > "aa"
bool String::operator>(const String& other) {
    for(int i = 0; i < std::min<int>(strlen(str), strlen(other.str)); ++i) {
        if(str[i] > other.str[i]) {
            return true;
        }
    }  
    return false;
}

String String::operator+(const String& other) {
    char* result = new char[strlen(str) + strlen(other.str) + 1];
    strcpy(result, str);
    strcat(result, other.str);
    String res(result);
    delete[] result;
    return res;
}

String& String::operator+=(const String& other) {
    *this = *this + other;
    return *this; 
}

char& String::operator[](unsigned int index) {
    if(index < strlen(str)) return str[index];
}

const char& String::operator[](unsigned int index) const {
    if(index < strlen(str)) return str[index];
}