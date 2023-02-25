#Write a program to extend a nested list by adding the sublist ["h", "i", "j"] in such a 
# way that it will look like the following list.

list1 = ["(GIVEN LIST)"]
sub_list = ["gIVEN SUB LIST"]

# understand indexing
# list1[2] = ['c', ['d', 'e', ['f', 'g'], 'k'], 'l']
# list1[2][1] = ['d', 'e', ['f', 'g'], 'k']
# list1[2][1][2] = ['f', 'g']

list1[2][1][2].extend(sub_list)
print(list1)
