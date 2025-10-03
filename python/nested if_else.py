x = int(input("enter the number1 :"))
y = int(input("enter the number2 :"))
z = int(input("enter the number3 :"))
if x > y :
    if x > z :
        print(x ,"is the greatest number")
    else :
        print(z , "is the greatest number")
else :
    if y > z :
        print(z , "is the greatest number")
    else :
        print(z ,"is the greatest number")