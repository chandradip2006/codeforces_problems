'''n = int(input("enter the natural number :"))
z = 0
for i in range (1 , n + 1 , 2) :
    z += i
print("the sum of odd natural numbers from 1 to" , n , "is :" ,z)'''

n = int(input("enter the natural number :"))
z = 0
i = 1
while i <= n :
    z += i
    i += 2
print("the sum of odd natural numbers from 1 to" , n , "is :" ,z)