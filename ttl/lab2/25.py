# WAP to convert a binary number to its equivalent octal & hexa-decimal number system.

b = int(input(("Enter the binary number: ")))
oct = 0
j = 1
while (b != 0):
    r = b % 10
    oct = oct + r * j
    j = j * 2
    b = b // 10
    
print("Equivalent octal value: " + str(oct))