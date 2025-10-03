# sum of all items in a dictionary
p = int (input("enter the number1 :"))
q = int (input("enter the number2 :"))
r = int (input("enter the number3 :"))
dict = {
    "a" : p ,
    "b" : q ,
    "c" : r
}
print (dict)
#print(dict["a"] + dict["b"] + dict["c"])
#OR

print(dict . values())
print(sum(dict . values()))