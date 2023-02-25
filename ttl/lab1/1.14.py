#WAP to input any two integers, and provide a menu to the user to select 
#any of the options as add,subtract, multiply, divide and display the result accordingly. 

num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
print("Select operation:")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")

choice = input("Enter choice(1/2/3/4):")

if choice == '1':
    print(num1 + num2)
elif choice == '2':
    print(num1 - num2)
elif choice == '3':
    print(num1 * num2)
elif choice == '4':
    if num2 != 0:
        print(num1 / num2)
    else:
        print("Cannot divide by zero")
else:
    print("Invalid operation")
