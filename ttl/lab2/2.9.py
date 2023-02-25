"""WAP to check whether an input integer is strong number or not."""


def is_strongnumber(n):
    sum_f = 0
    temp = n

    while n > 0:
        digit = n % 10
        sum_f += factorial(digit)
        n //= 10

    if sum_f == temp:
        return "is a strong number."
    return "is not a strong number."


def factorial(n):
    fact = 1
    for i in range(1, n+1):
        fact *= i
    return fact


n = int(input("Enter number"))
print(n, is_strongnumber(n))
