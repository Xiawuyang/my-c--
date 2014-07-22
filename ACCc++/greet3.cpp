#include <iostream>
#include <string>

int main()
{
	std::cout << "please enter your name :";
	std::string name;
	std::cin >> name;
	std::string greeting ="hello" + name + "!";

	std::cout<<std::endl;

	int pad = 0;
	std::cout << "please enter pad number :"; 
	std::cin >> pad;

	std::cout << std::endl;
	const std::string::size_type row = pad*2 + 3;
	const std::string::size_type cols = pad*2 + 2 + greeting.size();

	int r = 0;
	int c = 0;

	while(r != row)
	{
		while(c != cols)
		{
			if(r == 0 || r == row-1 || c == 0 || c == cols-1)
			{
				std::cout << "*";
				c++;
			}
			else if(r == pad + 1 && c == pad + 1){
				std::cout << greeting;	
				c = c + greeting.size();
			}
			else{
				std::cout << " ";
				c++;
			}
		}
		c = 0;
		std::cout<<std::endl;
		r++;
	}
	return 0;
}
