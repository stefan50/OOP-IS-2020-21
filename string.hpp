#include <iostream>
#include <cstring>
#include <algorithm>

// Doxygen
class String {
private:
    char* str;
public:
    //default constructor
    String() {
        str = nullptr;
    }

    // constructor
    String(const char* _str); // this->str = str

    //copy constructor
    String(const String& other);

    //destructor
    ~String();

    String& operator=(const String& other);

    bool operator==(const String& other);
    bool operator>(const String& other); // "aab" > "aaa"
    // "ss" + "aa" = "ssaa"
    // String s = s1 + s2;
    String operator+(const String& other);
    String& operator+=(const String& other);
    char& operator[](unsigned int index);
    const char& operator[](unsigned int index) const;
    // TODO: Idea - operator <<, operator >> 
    //print("Hello, world")
    //printf("Hello, %s", variable); // vararg // write()
    // stream
    // cout << "Hello world";
    // cin >> variable;
    // cerr << "This is an error"; 
    // int& a = b;
    // a++;

    const char* c_str() const {
        return str;
    }

    int size() const {
        return strlen(str);
    }

    void set_str(const char* _str);
};

void reverse(String original);