#include <iostream>
#include <string>
using namespace std;


bool Operator(char input_char) {
    return(input_char == '+' || input_char == '-' || input_char == '*' || input_char == '/' || input_char == '%' || input_char == '=');
}


int main() {
    char user_input[100];
    cout << "Enter a equation: ";
    cin >> user_input;

    cout << " Operators: ";
    for (int i = 0; user_input[i] != '\0'; i++) {
        if (Operator(user_input[i])) {
            cout << user_input[i] << " "<<endl;
        }
    }
    cout << endl;

    return 0;
}
