#include <iostream>
#include <cstring>

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

    const char* c_str() const {
        return str;
    }

    int size() const {
        return strlen(str);
    }

    void set_str(const char* _str);
};

void reverse(String original);