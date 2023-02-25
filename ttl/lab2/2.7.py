"""WAP to evaluate the equation y=x^n where n is a non-negative integer. """


def evaluate_equation(x, n):
    y = x**n
    return y

x=int(input("Enter x: "))
n=int(input("Enter n: "))
print(evaluate_equation(x, n))