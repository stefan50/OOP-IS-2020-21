#ifndef BUSINESS_ACCOUNT_HPP
#define BUSINESS_ACCOUNT_HPP
#include <string>
#include "Account.hpp"

class BusinessAccount: public Account {
private:
    std::string workplace;
    std::string company_id; //enforce format
};

#endif