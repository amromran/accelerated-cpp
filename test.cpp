#include <iostream>
#include <string>
using namespace std;

// Concept: Printable (C++20 feature)
template<typename T>
concept Printable = requires(ostream& os, T a) {
    { os << a };  // must support operator<<
};

// Variadic template function using a fold expression
template<Printable... T>
void print(T&&... args)
{
    (cout << ... << args) << '\n'; // print all arguments
}

int main()
{
    print("Hello!"s, ' ', "World ", 2017);
    return 0;
}
