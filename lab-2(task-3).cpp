

#include <iostream>

using namespace std;

int main() {
    char comment[100];

    cout << "Enter a line: ";
    cin >> comment;


    if (comment[0] == '/' && comment[1] == '/' || comment[1] == '*' || comment[98] == '/' || comment[99] == '/') {
        cout << "Input is a comment line." << endl;
    } else {
        cout << "Input is not a comment line." << endl;
    }

    return 0;
}


