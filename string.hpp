#include <iostream>
#include <cstring>

// Doxygen

class String {
private:
    std::size_t length;
    char* str;
public:
    //default constructor
    String() {
        length = 0;
        str = nullptr;
    }

    // constructor
    String(const char* _str);

    //destructor
    ~String();

    const char* c_str() const {
        return str;
    }

    int size() const {
        return length;
        // return strlen(str);
    }

    void set_str(const char* _str);
};