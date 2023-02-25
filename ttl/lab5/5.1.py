# Define a class called Triangle, with two fields as base and height to calculate the area of a triangle.
# The class contains two methods such as getData() to initialize the fields of a triangle and areaTrin()
# to calculate the area of a triangle. Write a program to find out area of 10 triangles.

class Triangle:
    def _init_(self, base, height):
        self.base = base
        self.height = height
    
    def getData(self):
        self.base = float(input("Enter the base of the triangle: "))
        self.height = float(input("Enter the height of the triangle: "))
    
    def areaTrin(self):
        area = 0.5 * self.base * self.height
        return area


triangles = []

for i in range(10):
    print(f"Enter data for triangle {i+1}:")
    t = Triangle(0, 0)
    t.getData()
    triangles.append(t)
    print("Area of triangle {i+1} is {t.areaTrin()}")
    
obj=A(5,12)

print("Area of triangle : {}".format(obj.area_trin()()))