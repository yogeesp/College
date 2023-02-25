def Fibonacci(n):
    a = 1
    b = 2
    if n == 0:
        return
    elif n == 1:
        print(a)

    else:
        print(a, b, end=" ")
        for i in range(3,n+1):
            c = (2**i)-1
            # a = b
            # b = c
            print(c, end=" ")


n=int(input("Enter nth term: "))
Fibonacci(n)