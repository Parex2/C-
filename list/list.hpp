#pragma once

#include "person.hpp"
#include <iostream>

class list
{
private:
	std::shared_ptr<person> head;
public:
	list(std::shared_ptr<person> head);
	~list();

	void add(std::shared_ptr<person> new_person);
	void instert(std::shared_ptr<person> new_person);
	void remove();
	void remove_by_name(std::string name);
	void display_list();
};





