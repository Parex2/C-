#include "address.hpp"

address::address(std::string street, std::string house_number){
    this->street = street;
    this->house_number = house_number;
}

address::~address(){
    
}

std::string address::get_street(){
    return street;
}

std::string address::get_house_number(){
    return house_number;
}

void address::set_street(std::string street){
    this->street = street;
}

void address::set_house_number(std::string house_number){
    this->house_number = house_number;
}