#WAP to test whether a number entered through keyboard is ODD or EVEN. 

def odd_or_eve(num):
    if num%2==0:
        return("Even")
    return ("Odd")

num=int(input("Enter num "))
print(odd_or_eve(num))