x = int(input("enter a number:"))
if x % 3 == 0 or x % 5 == 0 :
    if x % 15 == 0 :
        print(x ,"is divisable by 3 or 5 but divisable by 15")
    else:
        print(x ,"is divisable by 3 or 5 but not divisable by 15")
else :
    print(x , "is divisable by neither 3 nor 5")