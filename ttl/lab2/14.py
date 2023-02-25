# WAP to print the sum of the following series: S= 1+(1+2)+(1+2+3)+ ...(1+2+3+..+n).

num = int(input("Enter a range(n): "))

sum = 0

for i in range(1, num+1):
    sum = sum + i

print("Sum of the series upto " + str(num) + " terms is: " + str(sum))