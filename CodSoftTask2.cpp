// CodSoft Task 2!!
#include <iostream>

using namespace std;

int main() {
    double number1, number2;
    char op;
    
    cout << "Enter the value of number1: ";
    cin >> num1;
    
    cout << "Enter the value of number2: ";
    cin >> num2;
    
    cout << "Enter the operator (+ - * /): ";
    cin >> op;
    
    switch (op) {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            // peforming addition operation
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            // peforming substraction operation
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            // pefroming multiplication operation
            break;
        case '/':
            if (number2 == 0.0) {
                // condition for 0
                cout << "Division by zero situation" << endl;
                
                
            } else {
                cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
                // peforming division operation 
            }
            break;
        default:
            cout << "Invalid!" << endl;
            break;
    }

    return 0;
}
