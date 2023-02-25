#WAP to swap two integer numbers without using third variable.

a=int(input("Enter 1st number:"))
b=int(input("Enter 2nd number:"))

a=a+b
b=a-b
a=a-b
print(a,b)