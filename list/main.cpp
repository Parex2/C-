#include "person.hpp"
#include "list.hpp"
#include <string>
#include <memory>

int main()
{
	person per(24, "Marcin", "Pianka", std::make_shared<address>(address("Robotnicza", "96")));
	person per2(24, "Michalina", "Heyda", std::make_shared<address>(address("Jabłeczna", "32")));
	list li(std::make_shared<person>(per));
	li.add(std::make_shared<person>(per2));
	li.display_list();
	return 0;
}