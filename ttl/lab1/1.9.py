#WAP to add two times in hour, 
#minitue & second format entered through the keyboard in the format hh:mmdef add_times(time1, time2):

def add_times(time1, time2):
    # convert the input times to seconds
    time1_seconds = int(time1[0:2]) * 3600 + int(time1[3:5]) * 60 + int(time1[6:8])
    time2_seconds = int(time2[0:2]) * 3600 + int(time2[3:5]) * 60 + int(time2[6:8])
    # add the times in seconds
    total_seconds = time1_seconds + time2_seconds
    # convert the total seconds back to the HH:MM:SS format
    hours = total_seconds // 3600
    minutes = (total_seconds % 3600) // 60
    seconds = total_seconds % 60
    return f"{hours:02d}:{minutes:02d}:{seconds:02d}"

time1 = input("Enter time1 in the format HH:MM:SS: ")
time2 = input("Enter time2 in the format HH:MM:SS: ")
result = add_times(time1, time2)
print(f"The sum of the two times is: {result}")
