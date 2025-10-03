'''fruits = [ "apples" , "mangoes", "bananas", "cherry"]
print(fruits[1])
print(type(fruits))
print(fruits)
print(len(fruits))
if "bananas" in fruits :
    print("banana is part of list")
if "kiwi" not in fruits :
    print("kiwi is not part of list") 

print(fruits[-3])
print(fruits[ 1 : 3])
print(fruits[-3 : -1])

print(fruits[-4 : -1])'''

# adding elements to a list
list1 = [ 10 , 20 , 30 , 40 , 50] 
list1 . append(60)
print(list1)

list1 . insert ( 3 , 90)
print(list1)

list2 = [ 120 , 130 , 140]
list1 . extend(list2)
print(list1)

# removing item from list
list1. remove(120)
print (list1)
list1 . pop(6)
print(list1)
list1 . pop()
print(list1)

# changing items in a list
list1[2] = 900
print(list1)
list1[1 : 4] = [1, 2 , 3]
print(list1)

# soting a list
list1 . sort()
print(list1)

list1. sort(reverse= True)
print(list1)

list1 . reverse()
print(list1)