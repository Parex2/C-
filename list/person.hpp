#pragma once

#include "address.hpp"
#include <string>
#include <memory>

class person
{
private:
    int age;
    std::string name;
    std::string second_name;
    std::shared_ptr<address> adr;
    std::shared_ptr<person> next;

public:
    person(int age, std::string name, std::string second_name, std::shared_ptr<address> adr);
    ~person();

    std::shared_ptr<person> get_next();
    void set_next(std::shared_ptr<person> next);
    
    std::string get_name();
    std::string get_second_name();
    std::shared_ptr<address> get_address();
};

