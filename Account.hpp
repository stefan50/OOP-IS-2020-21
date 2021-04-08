#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <string>

class Account {
protected:
    std::string name;
    std::string username;
    std::string pass; // TODO: Encrypt
    std::string workplace;
    //BalanceAccount
public:
    bool validate_pass(std::string pass);
};

#endif