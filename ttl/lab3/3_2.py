# WAP to calculate the sum of digits of a given number.


def sum_of_digits(n):
    sum = 0
    while n > 0:
        digit = n % 10
        sum += digit
        n //= 10
    return sum


number = int(input("Enter number: "))
print("Sum of digits of", number, "is", sum_of_digits(number))
