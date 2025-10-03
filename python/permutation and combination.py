def factorial(x):
    z = 1
    for i in range (1 , x + 1):
        z *= i
    return z
def ncr (n , r):
    return factorial(n) / (factorial(r) * factorial(n - r))
n = int(input("enter the total no of objects present: "))
r = int(input("enter the no of objects to be selected: "))
print("the no of ways to select" , r , "objects from" , n , "objects is: " , int(ncr(n , r)))
