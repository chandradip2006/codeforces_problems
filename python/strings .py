name1 = 'college wallah'

name2 = "physics wallah"

name3 = ''' gate wallah '''

print(type(name1))
print(type(name2))
print(type(name3))
print(name1 , name2 , name3)

name4 = '''chandradip
karmakar'''
print(name4)

# indexing in a string
print(name1[0])
print(name1[-1])

#traversing through a string
for i in name1 :
    print(i)
t = 0
# OR using list comprehension
list  = [char for char in name1]
for i in list :
    print(i)

# calculating length of string
list  = [char for char in name1]
print(len(list))
print(len(name1))

# finding the index of the char / substring of a string
print(name1 . find(" "))

# slicing a string
str = "abcdef"
print(str[1 : 4])
print(str[1:])
print(str[:4])
#slicing using negative indexing
print(str[:-2])
print(str[-3:])
print(str[-3 : -1])
#  ........... -7-6-5 -4-3 -2 -1
# C O L L E G E   W A  L L  A  H
# 0 1 2 3 4 5 6 7 8 9 10 11 12 13
print(name1[8 :])
print(name1[8 : 12])
print(name1[-6 :])