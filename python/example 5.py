#determine the greatest of three numbers
x = int(input("enter the number1 :"))
y = int(input("enter the number2 :"))
z = int(input("enter the number3 :"))
'''if x >= y >= z :
    print(x)
elif x >= z >= y :
    print(x)
elif y >= x >= z :
    print(y)
elif y >= z >= x :
    print(y)
elif z >= x >= y :
    print(z)
elif z >= y >= x :
    print(z) '''

#another program
if x > y and x > z :
    print(x , "is the greatest number")
elif y > x and y > z : 
    print(y , "is the greatest number")
else :
    print(z , "is the greatest number")