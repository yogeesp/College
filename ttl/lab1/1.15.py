#WAP to display the grade system of KIIT University 
#based on total marks secured bya student inasemester. Use else..if ladder statement. 

marks = float(input("Enter total marks secured by the student: "))

if marks >= 90:
    print("Grade: O")
elif marks >= 80 and marks < 90:
    print("Grade: E")
elif marks >= 70 and marks < 80:
    print("Grade: A")
elif marks >= 60 and marks < 70:
    print("Grade: B")
elif marks >= 50 and marks < 60:
    print("Grade: C")
elif marks >= 40 and marks < 50:
    print("Grade: D")
else:
    print("Grade: F")
