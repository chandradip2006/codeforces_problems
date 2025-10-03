# sum of first n natural numbers
#n = int(input("enter the natural number :"))
#z = (n / 2) * ( n + 1)
#print (z)

# OR
sum = 0
'''for i in range ( 1 , n + 1) :
    sum += i
print( "sum of all numbers till n" , sum)

# write a function that prints hello world
def printhello () :
    # body of function
    print("hello world!!!")
printhello()'''

# function that takes 2 numbers as input and gives their sum 
def add( n1 = 0 , n2 = 0) :
    print("n1 :" , n1)
    print("n2 :" , n2)
    sum = n1 + n2
    return sum
x = float(input("enter number1 :"))
y = float(input("enter number2 :"))
#print("the sum is:" , add( x , y))

#positional argument
print("the sum is" , add( x , y))

# key argument ( named argument)
print("the sum is" , add( n1=x , n2=y))

# default arguments
print("the sum is" , add(3))

# arbitary arguments
def addallnumbers( *args) :
    sum = 0
    for i in args :
        sum += i 
    return sum
print("the sum is :" , addallnumbers( 2 , 3 , 4 , 5))

#keyworded arguments
def studentinfo ( **kwargs) :
    for x,y in kwargs.items() :
        print (x , "is" , y)

studentinfo(name = "chandradip" , age = 18 , city = "delhi")
studentinfo(name = "urvi" , age = 22 , city = "bangalore")
