x = int(input("enter your math marks:"))
y = int(input("enter your english marks:"))
if 100 >= x >= 80 and 100 >= y >= 80 :
    print("grade A")
elif 100 >= x >= 80 or 100 >= y >= 80 :
    print("grade B")
else :
    print("grade C")