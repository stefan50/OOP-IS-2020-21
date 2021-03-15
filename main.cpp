#include <iostream>
#include "string.hpp"

using namespace std;

int main() {
    String v("ala");
    //String v1;
    //cout << v.c_str() << " " << v.size() << endl;
    //reverse(v);
    //v1 = v;
    String v1("al");
    v += v1;
    v[0] = 'd';
    cout << v[0] << endl;
    return 0;
}