#WAP to print the following pattern for n rows. Ex. for n=5 rows

# A
# B A
# C B A
# D C B A
# E D C B A

def printPattern(num):


    i, j = 0, 0
    for i in range(1, num + 1):
        for j in range(i, 0, -1):
            print(chr(ord('A') + j - 1),
                            end = " ")

        print("")
    
    

n=int(input("Enter number of rows:"))
printPattern(n)