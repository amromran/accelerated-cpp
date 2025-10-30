#include <iostream>
#include <string>

using std::cout;    using std::string;
using std::endl;    using std::cin;

int main() {
    cout << "What is your name: ";
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";
    const int pad = 0;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    for (int r = 0; r != rows; ++r) {       // the loop repeats once for every row
        string::size_type c = 0;
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {    // when r == rows - 1 we are drawing the bottom border
                cout << "*";
                ++c;
            } else {
                cout << " ";
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}

/*
r == 0          : top border
r == rows - 1   : bottom border
c == 0          : left border
c == cols - 1   : right border
*/

/*
for each row r:
    for each column c:
        if we're at greeting row & start column → print greeting
        else if we're at border → print '*'
        else → print space
*/