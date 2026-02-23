#include <iostream>
using namespace std;

class Calculator {
  public: 
    float num1;
    float num2;

    float add() { 
        return num1 + num2; 
    }
    
    float subtract() { 
        return num1 - num2; 
    }
    
    float multiply() { 
        return num1 * num2; 
    }
    
    float divide() { 
        if (num2 == 0) { 
            cout << "Error! Division by zero." << endl; 
            return 0; 
        }
        return num1 / num2; 
    }
};

int main() {
    Calculator casio;
    char op;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> casio.num1 >> casio.num2; 
    switch (op) {
        case '+': 
            cout << casio.num1 << " + " << casio.num2 << " = " << casio.add(); 
            break;
        case '-': 
            cout << casio.num1 << " - " << casio.num2 << " = " << casio.subtract(); 
            break;
        default: 
            cout << "Error! Operator is not correct";
    }
    return 0;
}
