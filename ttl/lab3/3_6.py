"""WAP to find out the prime factors of a number entered through keyboard (distinct). """
import math


def get_distinct_prime_factors(n):
    primes = [0] * (n + 1)
    for i in range(2, int(math.sqrt(n)) + 1):
        if (primes[i] == 0):
            for j in range(i * i, n + 1, i):
                primes[j] = 1
    prime_factors = []
    for i in range(2, n):
        if (primes[i] == 0):
            if (n % i == 0):
                prime_factors.append(i)
    return set(prime_factors)

n = int(input("Enter a number:"))
print(get_distinct_prime_factors(n))

