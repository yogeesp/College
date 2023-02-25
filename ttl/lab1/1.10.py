#WAP to input any two integers distinct and display the greater of two integers

def max_number(num1,num2):
    if num1==num2:
        return("Enter distinct numbers")
    return ("Maximum number is",max (num1,num2))

num1=int(input("Enter number 1 "))
num2=int(input("Enter number 2 "))
print(max_number(num1,num2))
