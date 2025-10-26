#include <iostream>

using namespace std;


bool isNum(string c) {
    for (int i = 0; i < c.length(); i++) {
        if (c[i] < '0' || c[i] > '9')  
            return false;
    }
    return true; 
}

int main() {
    string c;
    cout << "Enter any input: ";
    cin >> c;

    if (isNum(c))
        cout << c << " is a Numeric Constant." << endl;
    else
        cout << c << " is NOT a Numeric Constant." << endl;

    return 0;
}
