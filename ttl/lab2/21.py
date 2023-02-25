# WAP to generate the pascal triangle pyramid of numbers for a given number. Ex. for number 5

#     1
#    1 1
#   1 2 1
#  1 3 3 1
# 1 4 6 4 1

from math import factorial

num = int(input("Enter number of rows: "))

for i in range(num):
    for j in range(num-i+1):
        print(end=" ")
 
    for j in range(i+1):
        print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
    print()