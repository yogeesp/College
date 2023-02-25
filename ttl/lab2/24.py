# WAP to convert a number with base b into its equivalent decimal number. Number with base b & b are
# the user input.

def val(c):
    if c >= '0' and c <= '9':
        return ord(c) - ord('0')
    else:
        return ord(c) - ord('A') + 10
 
def deci(str,base):
    llen = len(str)
    power = 1
    num = 0
 
    for i in range(llen - 1, -1, -1):
        if val(str[i]) >= base:
            print('Invalid Number')
            return -1
        num += val(str[i]) * power
        power = power * base
    return num
     
strr = input("Enter value: ")
base = int(input("Enter base: "))
print("Decimal equivalent of " + strr + " in base " + str(base) + " is: " + str(deci(strr, base)))