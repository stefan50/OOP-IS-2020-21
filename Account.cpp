#include "Account.hpp"

//asd
bool Account::validate_pass(std::string pass) {
    //is_valid |= (pass.length() >= 8 && pass.length() <= 16);
    bool has_capital = false;
    bool has_small = false;
    bool has_special = false;
    bool has_number = false;
    for(char letter: pass) {
        if(letter >= 'a' && letter <= 'z') {
            has_small = true;
        }
        else if(letter >= 'A' && letter <= 'Z') {
            has_capital = true;
        } 
        else if(letter == '*' || letter == '&' || letter == '//' || letter == '%') {
            has_special = true;
        }  
        else if(letter >= '0' && letter <= '9') {
            has_number = true;
        }
    }
    return pass.length() >= 8 && pass.length() <= 16 && has_number && has_small && has_capital && has_special;
}