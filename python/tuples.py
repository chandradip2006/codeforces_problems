fruits = ( "apples" , "mangoes", "bananas", "cherry")
fruit = ("apple")
FRUIT = ("apple" , )
Fruit = tuple("apple")

print(type(fruits))
print(type(fruit))
print(type(FRUIT))
print(type(Fruit))

print(len(fruits))
#accessing items of tuples
print(fruits[2])
print(fruits[-3])
print(fruits[0 : 3])
print(fruits[-4 :])
print(fruits[:3])

# cheaking item present in tuple
if "cherry" in fruits :
    print("cherry is part of tuple")

# traverse the tuple
for i in fruits :
    print(i)

# concatenate 2 tuples
more_fruits = ("jackfruit" ," coconut" , "orange")
Fruits = fruits + more_fruits
print(Fruits)

# unpacking a tuple
fruit1 , fruit2 , fruit3 , fruit4 = fruits
print(fruit1 , fruit2 , fruit3 , fruit4)