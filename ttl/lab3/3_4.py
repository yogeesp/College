# WAP to find the GCD/HCF of two numbers.


def gcd(n1, n2):

    if n1 == n2:
        return n1
    if n1 > n2:
        return gcd(n1 - n2, n2)
    return gcd(n1, n2 - n1)


n1 = int(input("Enter number 1: "))
n2 = int(input("Enter number 2: "))
print("HCF of", n1, "and", n2, "is", gcd(n1, n2))
