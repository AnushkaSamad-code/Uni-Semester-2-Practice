#include <iostream>
using namespace std; // Khandaan ka naam taake baar baar std:: na likhna paray

// 👷 WORKERS (Functions) - Yeh bilkul C language jaise hi hain!
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
    // Math rule: 0 se divide nahi kar sakte
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

// 👔 MANAGER (Main Function)
int main() {
    char op; // Dabba for +, -, *, /
    float num1, num2, result; // Dabbay for numbers

    // printf ki jagah cout, aur scanf ki jagah cin (Bina kisi %f ke!)
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculator ka Brain
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
                divide(num1, num2); // Taake sirf error message print ho
            }
            break;
            
        default:
            cout << "Error! Operator is not correct.";
    }

    return 0; // Manager ka kaam khatam
}
