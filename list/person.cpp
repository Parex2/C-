#include "person.hpp"

person::person(int age, std::string name, std::string second_name, std::shared_ptr<address> adr){
    this->age = age;
    this->name = name;
    this->second_name = second_name;
    this->adr = adr;
    this->next = nullptr;
}

person::~person(){

}

std::shared_ptr<person> person::get_next(){
    return this->next;
}

void person::set_next(std::shared_ptr<person> next) {
    this->next = next;
}

std::string person::get_name(){
    return name;
}

std::string person::get_second_name(){
    return second_name;
}

std::shared_ptr<address> person::get_address(){
    return adr;
}

void person::instert(std::shared_ptr<person> new_person){

}