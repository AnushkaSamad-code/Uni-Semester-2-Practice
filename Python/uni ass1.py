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
    else:  
        return a / b

op = input("Enter an operator (+, -, *, /): ")
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))


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
            divide(num1, num2) 
            
    case _:  
        print("Error! Operator is not correct.")
