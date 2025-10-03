# pass by value
def addOne (x) :
    x = x + 1
    print("the inside_function value is :" , x)

x = int(input("enter a number :"))
addOne(x)
print("the value of outer_function is :" , x)
print(type(addOne))

# pass by reference
def modify_list (list) :
    list . append(x)
    print("inside_list is :" , list)

list = [1 , 2 , 3]
x = int(input("enter the inserting number :"))
modify_list(list)
print("outside_list is :" , list)

def modify_list (list) :
    list = [4 , 5 , 6]
    print("inside_list is :" , list)
list = [1 , 2 , 3]
modify_list(list)
print("outside_list is :" , list)
