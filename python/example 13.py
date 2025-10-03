# to find common elements of given lists
n1 = int (input("enter no of items in list1 :"))
list1 = []
for i in range( 1 , n1 + 1) :
    num1 = int( input())
    list1 . append(num1)
print(list1)

n2 = int (input("enter no of items in list2 :"))
list2 = []
for i in range( 1 , n2 + 1) :
    num2 = int( input())
    list2 . append(num2)
print(list2)

n3 = int (input("enter no of items in list3 :"))
list3 = []
for i in range( 1 , n3 + 1) :
    num3 = int( input())
    list3 . append(num3)
print(list3)

set1 = set(list1)
set2 = set(list2)
set3 = set(list3)
set4 = set1 . intersection(set2)
set5 = set3 . intersection(set4)
list4 = list(set5)
print(list4)