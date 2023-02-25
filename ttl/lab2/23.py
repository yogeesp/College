# WAP to convert a decimal number into its equivalent number with base b. Decimal number and b are
# the user input.

def reVal(num):
    if (num >= 0 and num <= 9):
        return chr(num + ord('0'))
    else:
        return chr(num - 10 + ord('A'))
 
def strev(str):
    len = len(str)
    for i in range(int(len / 2)):
        temp = str[i]
        str[i] = str[len - i - 1]
        str[len - i - 1] = temp
 
def fromDeci(res, base, num):
    index = 0
    while (num > 0):
        res+= reVal(num % base)
        num = int(num / base)
    res = res[::-1]
 
    return res
 
num = int(input("Enter deecimal value: "))
base = int(input("Enter base: "))
res = ""
print("Equivalent of " + str(num) + " in base " + str(base) + " is: " + str(fromDeci(res, base, num)))