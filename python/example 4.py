# determine a number is 4 digited or not
x = int(input("enter the number :"))
#if 9999 >= x >= 1000 :
  #  print("this is a four digit number")
#else :
   # print("this is not a four digit number")

if x <= 9999 and 1000<= x :
    print("this is a four digit number")
else :
    print("this is not a four digit number")