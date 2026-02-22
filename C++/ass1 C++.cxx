#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {

    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}
int main() {
    char op; 
    float num1, num2, result; 
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2
    switch (op) {
        case '+':
            result = add(num1, num2);
            cout << num1 << " + " << num2 << " = " << result;
            break;
            
        case '-':
            result = subtract(num1, num2);
            cout << num1 << " - " << num2 << " = " << result;
            break;
            
        case '*':
            result = multiply(num1, num2);
            cout << num1 << " * " << num2 << " = " << result;
            break;
            
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                cout << num1 << " / " << num2 << " = " << result;
            } else {
                divide(num1, num2); 
            }
            break;
            
        default:
            cout << "Error! Operator is not correct.";
    }

    return 0; 
}
