# 👷 WORKERS (Functions)
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        print("Error! Division by zero is not allowed.")
        return 0
    else:  # CR ki behtareen correction!
        return a / b

# 👔 MANAGER (Main Program)
op = input("Enter an operator (+, -, *, /): ")
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Modern Python 3.10+ match...case (No 'break' needed!)
match op:
    case '+':
        result = add(num1, num2)
        print(f"{num1} + {num2} = {result}")
        
    case '-':
        result = subtract(num1, num2)
        print(f"{num1} - {num2} = {result}")
        
    case '*':
        result = multiply(num1, num2)
        print(f"{num1} * {num2} = {result}")
        
    case '/':
        if num2 != 0:
            result = divide(num1, num2)
            print(f"{num1} / {num2} = {result}")
        else:
            divide(num1, num2) # Taake division ka error message print ho
            
    case _:  # Yeh C++ ka 'default' hai (agar koi ghalat nishan daal de)
        print("Error! Operator is not correct.")
