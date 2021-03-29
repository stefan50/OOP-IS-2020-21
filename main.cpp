#include <iostream>
#include <fstream>
#include "string.hpp"
#include <string>

using namespace std;

int main() {
    /*String v("ala");
    //String v1;
    //cout << v.c_str() << " " << v.size() << endl;
    //reverse(v);
    //v1 = v;
    String v1("al");
    v += v1;
    v[0] = 'd';
    cout << v[0] << endl;*/
    
    /*std::string buffer; 
    std::string buffer_arr[5];
    int i = 0;
    while(input_file >> buffer) {
        buffer_arr[i++] = buffer;  
    }*/
    /*
    std::ifstream input_file;
    input_file.open("test.txt");
    input_file.seekg(0, input_file.end);
    int length = input_file.tellg();
    input_file.seekg(0, input_file.beg);
    char* buffer = new char[length];
    input_file.read(buffer, length);
    input_file.close();

    for(int i = 0; i < length; ++i) {
        cout << buffer[i];
    }

    delete[] buffer;*/
    std::ifstream input_file;
    input_file.open("test.txt");
    while(char c = input_file.get()) {
        if(input_file.eof()) break; // eof = end of file
        if(c != ' ' && c != '\n') {
            cout << c;
        }
    }
    input_file.close();
    return 0;
}