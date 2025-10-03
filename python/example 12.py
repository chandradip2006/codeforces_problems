# try this
list1 = [23 , 65 , 19 , 90]
'''list1 . insert( 0 , 19)
list1 . insert( 3 , 23)
list1 . pop(1)
list1 . pop(3)
print(list1)'''
# OR
x = list1[0]
list1[0] = list1 [2]
list1[2] = x
print(list1)


list2 = [1 , 2 , 3 , 4 , 5]
'''list2 . pop(1)
list2 . pop(3)
list2 . insert( 1 , 5)
list2.append(2)
print(list2)'''
#OR
y = list2 [4]
list2 [4] = list2 [1]
list2 [1] = y
print(list2)