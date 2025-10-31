#include <iostream>
#include <string>

int main() {
    using std::cout;    using std::string;
    using std::endl;    using std::cin;

    cout << "Enter side num: ";
    int side;
    cin >> side;

    int first_row = side;
    int last_row = side - 1;
    int remaining_rows = last_row - first_row - 1;

    for (int i = 0; i != side * 4; ++i) {
        for (int j = 0; j != i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}