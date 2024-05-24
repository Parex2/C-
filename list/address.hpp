#pragma once

#include <string>

class address
{
private:
    std::string street;
    std::string house_number;
public:
    address(std::string street, std::string house_number);
    ~address();

    std::string get_street();
    std::string get_house_number();

    void set_street(std::string street);
    void set_house_number(std::string house_number);
};

