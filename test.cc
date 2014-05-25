#include <iostream>
#include <string>

int main()
{
	std::string string = "hi";
	string[0] = 'a';
	string[1] = 'b';
	string[2] = '\0';
	std::cout << string[1] << std::endl;
	return 0;
}
