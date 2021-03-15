#include <iostream>
#include "string.hpp"

using namespace std;

int main() {
    String v("ala");
    String v1;
    //cout << v.c_str() << " " << v.size() << endl;
    reverse(v);
    cout << v.c_str() << endl;
    return 0;
}