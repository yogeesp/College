#WAP to input any three integers distinct and display the greater of three integers.

def max_number(num1,num2,num3):
    if any([num1==num2,num2==num3,num1==num3]):
        return("Enter distinct integers")
    return max (num1,num2,num3)

num1=int(input("Enter number 1 "))
num2=int(input("Enter number 2 "))
num3=int(input("Enter number 3 "))

print(max_number(num1,num2,num3))
