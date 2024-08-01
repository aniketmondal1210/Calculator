#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter 2 integers: ";
    cin >> n1 >> n2;

    cout << "Enter an operator ('+', '-', '*', '/', '%'): ";
    char operatorofchoice;
    cin >> operatorofchoice;

    switch (operatorofchoice) {
        case '+':
            cout << "Sum is: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Difference is: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Product is: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Division is: " << n1 / n2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        case '%':
            if (n2 != 0) {
                cout << "Remainder is: " << n1 % n2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Error! Enter a valid operator." << endl;
            break;
    }
    return 0;
}
