#ifndef CPMNUKER_HPP
#define CPMNUKER_HPP

#include <iostream>
#include <cpr/cpr.h>
#include "json.hpp"

using json = nlohmann::json;

class CPMNuker
{

public:
    CPMNuker(std::string access_key);
    bool account_login(std::string email, std::string password);
    bool account_change_data(std::string vname, std::string vvalue);
    bool account_change_rating();

private:
    std::string access_key;
    std::string auth_token;
};

#endif // CPMNUKER_HPP
