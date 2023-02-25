"""WAP to print all odd and even numbers separately within a given range. The range is input through 
user. """

def oddEven(n1,n2):

    print("Even numbers:")
    for i in range(n1,n2):

        if i%2==0:
            print(i)
    print("Odd numbers:")
    for i in range(n1,n2):

        if i%2!=0:
            print(i)


n1=int(input("Enter smaller number "))
n2=int(input("Enter larger number "))
oddEven(n1, n2)
