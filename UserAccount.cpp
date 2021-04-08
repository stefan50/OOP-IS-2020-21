#include "UserAccount.hpp"

UserAccount::UserAccount() {
    name = "John Doe";
    gen = Gender::MALE;
    age = 30;
    username = "test";
    pass = "test";
    workplace = "John Doe Inc.";
    id_card_num = "645578";
    id = "7908135566";
    //BalanceAccount
}

UserAccount::UserAccount(std::string _name, std::string _username, std::string _pass, std::string _workplace, Gender _gen, int _age, std::string _id_card_num, std::string _id /*, BalanceAccount */) {
    name = _name;
    username = _username;
    age = _age;
    // enforce pass restrictions
    if(validate_pass(_pass)) {
        pass = _pass;
    }
    else exit(-1);
    workplace = _workplace;
    gen = _gen;
    //enforce restrictions
    // HW - enforce restrictions on id_card_num and id
    id_card_num = _id_card_num;
    id = _id;
}