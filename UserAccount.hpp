#ifndef USER_ACCOUNT_HPP
#define USER_ACCOUNT_HPP
#include <string>
#include "Gender.hpp"
#include "Account.hpp"

//technical debt
class UserAccount: public Account {
private:
    Gender gen;
    int age;
    std::string id_card_num; //enforce format
    std::string id; //enforce format
public:
    UserAccount();
    UserAccount(std::string _name, std::string _username, std::string _pass, std::string _workplace, Gender _gen, int _age, std::string _id_card_num, std::string _id);
};

#endif