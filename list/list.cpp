#include "list.hpp"

list::list(std::shared_ptr<person> head) {
	this->head = head;
}

list::~list(){

}

void list::add(std::shared_ptr<person> new_person){
	std::shared_ptr<person> current = head;

	while(current->get_next()){
		current = current->get_next();
	}

	current->set_next(new_person);
}

void list::display_list(){
	std::shared_ptr<person> current = head;
	while (current)
	{
		std::cout << current->get_name() << " " << current->get_second_name() << std::endl;
		current = current->get_next();
	}
	
}

void list::instert(std::shared_ptr<person> new_person){

}

void list::remove(){
	std::shared_ptr<person> current = head;

	while(current->get_next()->get_next()){
		current = current->get_next();
	}

	current->set_next(nullptr);
}