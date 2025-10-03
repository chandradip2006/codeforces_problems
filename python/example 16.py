# determine the sum of first n natural numbers by creating a function
#n = int(input("enter a natural number1 :"))
def sumOneToN (x) :
    sum = 0
    for i in range ( 1 , x + 1) :
        sum += i
    return sum
#print("the sum is:" , sumOneToN(n)) 

#n1 = int(input("enter a natural number2 :"))
#print("the sum is :" , sumOneToN(n1))

r = int(input("enter the no of sums you want :"))
for p in range(r) :
    z = int(input("enter the natural number :"))
    print("the sum is :" , sumOneToN(z))
