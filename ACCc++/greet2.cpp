#include <iostream>
#include <string>

int main()
{
	std::cout<<"please enter your name:";
	std::string name;
	std::cin >> name;

	const std::string hello = "hello"+name;
	const std::string space(hello.size(),' ');
	const std::string second = "* " + space + " *";
	const std::string first(second.size(), '*');

	std::cout << std::endl;
	std::cout << first<< std::endl;
	std::cout << second << std:: endl;
	std::cout << "* " + hello + " *"<< std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	return 0;
}
