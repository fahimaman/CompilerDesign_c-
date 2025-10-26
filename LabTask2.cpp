#include <iostream>
#include <string>
using namespace std;

int main() {
    string exp;
    cout << "Enter an expression: ";
    cin >> exp;

    // Array of arithmetic operators
    char operators[] = {'+', '-', '*', '/', '%', '='};

    cout << "Operators found:\n";

    int opCount = 1;
    for (int i = 0; i < exp.length(); i++) {
        // Check if current character matches any operator in the array
        for (int j = 0; j < 6; j++) {
            if (exp[i] == operators[j]) {
                cout << "operator" << opCount << ": " << exp[i] << endl;
                opCount++;
            }
        }
    }

    return 0;
}
