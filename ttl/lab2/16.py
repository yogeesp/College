# WAP to print the Following pattern for n rows. Ex. for n=5 rows

#      *
#     * *
#    * * *
#   * * * *
#  * * * * *

num = int(input("Enter number of rows: "))
     
k = num - 1

for i in range(0, num):
    for j in range(0, k):
        print(end=" ")
    k = k - 1
    
    for j in range(0, i+1):
        print("* ", end="")
    print("\r")