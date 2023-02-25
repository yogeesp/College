#WAP to print the series as 3 5 7 11 13 17..........n, where n is given by user.
import math

def print_prime_series(n):
    primes = [x for x in range(2,n+1) if all(x % i != 0 for i in range(2, x))]
    print(primes)

n = int(input("Enter a number: "))
print_prime_series(n)
