#WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full markofeach subject is 100. 
def calculate_percentage(marks):
    total_marks = sum(marks)
    percentage = (total_marks / 500) * 100
    return percentage

marks = []
for i in range(5):
    subject_mark = int(input(f"Enter mark for subject {i+1}: "))
    marks.append(subject_mark)

percentage = calculate_percentage(marks)
print(f"Average percentage: {percentage}%")
