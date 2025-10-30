#include <iostream>
#include <string>

using std::cout;    using std::cin;
using std::endl;    using std::string;

int main() {
    cout << "What is your name: ";
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    // separate padding for vertical and horizontal
    const int pad_y = 1;  // vertical (top and bottom)
    const int pad_x = 4;  // horizontal (left and right)

    // total number of rows and columns
    const int rows = pad_y * 2 + 3;                                     // top border + padding + greeting + padding + bottom border
    const string::size_type cols = greeting.size() + pad_x * 2 + 2;     // sides + padding + greeting

    cout << endl;

    for (int r = 0; r != rows; ++r) {
        for (string::size_type c = 0; c != cols; ++c) {
            if (r == pad_y + 1 && c == pad_x + 1) {
                cout << greeting;
                c += greeting.size();
            } else if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
