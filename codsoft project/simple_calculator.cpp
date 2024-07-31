// Task is to develop a Simple Calculator

// Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
// Allow the user to input two numbers and choose an operation to perform.


// Code -

#include <bits/stdc++.h>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    double result;

    // Display instructions

    cout << "Simple Calculator Program\n";

    cout << "Enter two numbers followed by an operation (+, -, *, /):\n";
    

    // User inputs

    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1;
    }


    // Display the result
    cout << "The result is: " << result << endl;

    return 0;
}
