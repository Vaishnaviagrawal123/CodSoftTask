#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Enter the value of num1: ";
    cin >> num1;
    
    cout << "Enter the value of num2: ";
    cin >> num2;
    
    cout << "Enter the operator (+ - * /): ";
    cin >> op;
    
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0.0) {
                cout << "Division by zero situation" << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}