#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter ur 1st name: ";
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

    /*
    when we construct a string from an integer value and a char value,
    the result has as many copies of the
    char value as the value of the integer.
     */
    const std::string spaces(greeting.size(), ' '); // .size() is a member function // 10 x * = **********
    const std::string second = "* " + spaces + " *";

    const std::string first(second.size(), '*');


    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
}