#include <iostream>
#include <string>

int main() {
	std::cout << "Enter ur 1st name: ";
	
	std::string name;	// define name
	std::cin >> name;	// read into name, cin is short for character input
	
	// write greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}	

// "Hello, " << name << "!" go into the buffer when std::endl runs it inserts a new line \n and flushes the buffer
// to the output stream