#WAP to calculate area of a triangle whose three sides are given. 
import math

def area_triangle(a, b, c):
    s = (a + b + c) / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    return area

a = float(input("Enter the length of side 1: "))
b = float(input("Enter the length of side 2: "))
c = float(input("Enter the length of side 3: "))

print("The area of the triangle is", area_triangle(a, b, c))
