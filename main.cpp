#include <iostream>
#include "string.hpp"

using namespace std;

int main() {
    String v("ala");
    String v1;
    cout << v.c_str() << " " << v.size() << endl;
    return 0;
}