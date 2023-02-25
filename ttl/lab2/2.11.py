#WAP to find the first n numbers of a Fibonacci sequence.

def Fibonacci(n):
    a = 0
    b = 1
    if n == 0:
        return
    elif n == 1:
        print(a)
    elif n == 2:
        print(a, b)
    else:
        print(a, b, end=" ")
        for i in range(n-2):
            c = a + b
            a = b
            b = c
            print(b, end=" ")


n=int(input("Enter nth term: "))
Fibonacci(n)