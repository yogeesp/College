#WAP to read an alphabet from  the user and convert it into 
#lowercase if the entered alphabetis in uppercase, otherwise display an appropriate message. 

def convert_alphabet(alphabet):
    if alphabet.isalpha() and len(alphabet) == 1:
        if alphabet.isupper():
            return f"The lowercase of {alphabet} is {alphabet.lower()}"
        elif alphabet.islower():
            return f"The alphabet {alphabet} is already in lowercase."
        else:
            return "Enter valid alphabet"
    else:
        return "Enter valid alphabet"

alphabet = input("Enter an alphabet: ")
print(convert_alphabet(alphabet))
