# WAP to print the following pattern for n rows. Ex. for n=5 rows

# 1
# 2 1
# 1 2 3
# 4 3 2 1
# 1 2 3 4 5

num = int(input("Enter number of rows: "))

for i in range(1, num+1):
    if (i % 2 != 0):
        for j in range (1, i+1):
            print(str(j), end=" ")
    else:
        for j in range (i, 0, -1):
            print(str(j), end=" ")
    print("\r")