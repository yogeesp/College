#WAP to check whether a character entered through keyboard is a digit, letter, special 
#characteretc or not. 

import string

char = input("Enter a character: ")

if char.isdigit():
    print(f"{char} is a digit.")
elif char.isalpha() and len(char)==1:
    print(f"{char} is a letter.")
elif char in string.punctuation:
    print(f"{char} is a special character.")
else:
    print(f"{char} is not a digit, letter or special character.")
