# determine your grade of your percentage marks
x = float(input("enter your percentage marks :"))
if 100 >= x >= 90 :
    print("outstanding, grade O")
elif 90 > x >=80 :
    print("excellent, grade A+")
elif 80 > x >= 70 :
    print("very good, grade A")
elif 70 > x >= 60 :
    print("good, grade B+")
elif 60 > x >= 50 :
    print("average, grade B")
elif 50 > x >= 30 :
    print("satisfactory, grade C")
elif 30 > x >= 0 :
    print("fail , grade F")