# WAP to print the following pattern for n rows. Ex. for n=6 rows

# 1
# 0 1
# 1 0 1
# 0 1 0 1
# 1 0 1 0 1
# 0 1 0 1 0 1

num = int(input("Enter number of rows: "))

print("1")
for i in range(2, num+1):
    if i % 2 != 0:
        print("1", end=" ")
    for j in range(0, i//2):
        print("0 1", end=" ")
    print("\r")