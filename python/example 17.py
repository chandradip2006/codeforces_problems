# functions for calculating factorial of a number
def factorial (x) :
    a = 1
    for i in range (1 , x + 1) :
        a = a * i
    print("the value is :", a)

r = int(input("enter the factorial number :"))
factorial(r)

# or
def factorial (x) :
    a = 1
    if x == 0 :
        a = 1
    
    for i in range (1 , x + 1) :
        a = a * i
    return a
r = int(input("enter the factorial number :"))
output = factorial (r)
print("the value is :", output)
