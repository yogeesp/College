"""Write a function to check if a given number is perfect or not."""


def num_perfect(num):
    sum_n = 0
    for i in range(1, num):
        if num % i == 0:
            sum_n = sum_n + i

    if sum_n == num:
        return "is a perfect number"
    return "is not a perfect number"

num=int(input("Enter a number: "))
print(num,num_perfect(num))
