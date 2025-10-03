# build in function
'''there are many build in functions 
we can command on build in functions by more and more questions practicing'''
'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    print("/" * i)'''

'''r = int(input("enter the number of rows :"))
for x in range (1 , r + 1) :
    print(" " * (r - x) , end="")
    print("/" * (2 * x - 1))'''

# find the average of N numbers
'''n = int(input("enter the number of numbers :"))
list = []
for i in range (n) :
    x = float(input("enter the number :"))
    list . append(x)
print(list)
z = sum(list) / n
print("the average of the numbers is :" , z)'''

# OR
'''n = int(input("enter the number of numbers :"))
total_sum = 0
for i in range (n) :
    x = float(input("enter the number :"))
    total_sum += x
z = total_sum / n
print("the average of the numbers is :" , z)'''

# finding sum of first N natural numbers
'''n = int(input("enter the natural number :"))
sum = 0
for i in range (1 , n + 1) :
    sum += i
print ("the sum of N natural numbers is :" , sum)'''

# OR
'''def sum (r) :
    if r == 0 :
        return 0
    else :
        add = r + sum (r - 1)
    return add
t = int(input("enter the natural number :"))
print("the sum of N natural numbers is :" , sum(t))'''

# calculating percentage of your exam
'''n = int(input("enter no of subjects :"))
x = 0
for i in range (n) :
    subject_marks = int(input("enter the subject marks :"))
    x += subject_marks
total_marks = int(input("enter the total marks of exam :"))
z = (x / total_marks ) * 100
print("your percentage is :" , z) '''

'''n = int(input("enter the odd row number :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("|" * (2 * i - 1))

r = int(input("enter the odd row number :"))
for j in range (r) :
    print(" " * j , end="")
    print("|" * (2 * (r - j) - 1))

x = int(input("enter the odd row number :"))
for k in range (1 , x + 1) :
    print ("_" * k , sep="")
for l in range (x + 1 , 2 * x):
    print ("_" * (2 * x - l) , sep="")'''

'''n = int(input("enter odd no of rows :"))
print("*" * (2*n - 1))
for i in range (1 , n ) :
    print("*" * (n - i) , end="")
    print(" " * (2 * i - 1) , end="") 
    print("*" * (n - i))
for j in range (1 , n ) :
    print("*" * (j) , end="")
    print(" " * (2 * (n - j) - 1) , end="") 
    print("*" * (j))
print("*" * (2*n - 1))'''

'''str1 = input ("enter a word in small letter :")
str2 = str1 . upper()
print("in capital letter :" , str2)'''

'''str1 = input ("enter a word in small letter :")
str2 = str1 . capitalize()
print(str2)'''

### pattern_questions

'''x = int(input("enter the row number :"))
y = int(input("enter the no of stars in each rows :"))
for i in range (x) :
    print("*" * y)'''
'''n = int(input("enter the number of rows :"))
for i in range (n) :
    for j in range (1 , n + 1) :
        print(j, end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for j in range (1 , n + 1) :
    print("*" * j)
print()'''

'''n = int(input("enter the number of rows :"))
for i in range (n) :
    print("*" * (n - i))
print()'''

'''n = int(input("enter the number of rows :"))
for i in range (n) :
    print("*" * (n - i))
print()'''


'''n = int(input("enter the number of rows :"))
for k in range (1 , n + 1) :
    for m in range (1 , k + 1) :
        print( m , end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for k in range (1 , n + 1 ) :
    for m in range (1 , (2 * k) , 2) :
        print( m , end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for k in range (n) :
    for m in range (n):
        print(chr(65 + m) , end="")   
    print()'''

'''n = int(input("enter the number of rows :"))
for k in range (1 , n + 1) :
    for m in range (k):
        print(chr(65 + m) , end="")   
    print()'''

'''m = int(input("enter the length :"))
n = int(input("enter the breath :"))
print("*" * m)
for i in range (n - 2) :
    print("*" ,end="")
    print(" " * (m - 2) , end="")
    print("*")
print("*" * m)'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i), end="")
    print("*" * i)'''

'''n = int(input("enter the number of rows :"))
for i in range (n) :
    print("*" * (n - i))'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("*" * n)'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    for j in range (i):
        print(chr(65 + j) , end="" )
    print()'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("*" * (2 * i - 1))'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    for j in range (1 , 2 * i) :
        print(j , end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , n + 1) :
    for j in range (1 , 2 * i ) :
        print(j , end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for i in range (n) :
    print(" " * (n - i), end="")
    print("*" * (2 * i + 1) , end="")
    print()
print("*" * (2 * n + 1))
for i in range (n) :
    print(" " * (i + 1), end="")
    print("*" * (2 * (n - i) - 1), end="")
    print()'''

'''n = int(input("enter the number of rows :"))
print("*" * (2 * n - 1))
for i in range (1 , n) :
    print("*" * (n - i) , end="")
    print(" " * (2 * i - 1) , end="")
    print("*" * (n - i) )
for i in range (1 , n) :
    print("*" * (i) , end="")
    print(" " * (2 * (n - i) - 1) , end="")
    print("*" * (i) )
print("*" * (2 * n - 1))'''

'''n = int(input("enter the number of rows :"))
for i in range (1 , 2 *n) :
    print(i , end="")
print()
for j in range (1 , n) :
    for k in range (1 , n - j + 1) :
        print(k , end="")
    print(" " * (2 * j - 1) , end="")
    for k in range (n + j , 2 * n) :
        print(k , end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for i in range ( 1, 2 *n) :
    print(chr(64 + i) , end="")
print()
for j in range (1 , n) :
    for k in range (1 , n - j + 1) :
        print(chr(64 + k) , end="")
    print(" " * (2 * j - 1) , end="")
    for k in range (n + j , 2 * n) :
        print(chr(64 + k) , end="")
    print()'''

'''n = int(input("enter the number of rows :"))
for i in range(n) :
    print (i + 1 , end="")
for p in range(1 , n) :
    print(n - p , end="")
print()
for j in range (1 , n) :
    for k in range (1 , n - j +1) :
        print(k , end="")
    print(" " * (2 * j - 1) , end="")
    for l in range (j , n) :
        print(n - l , end="") 
    print()  '''

'''def factorial (n) :
    if n == 0 :
        return 1
    else:
        product = n * factorial(n - 1)
    return product
x = int(input("enter the number :"))
print("the factorial of the number is :" , factorial(x))'''

'''def printN_To_1 (n) :
    if n == 1 :
        print ("1")
    else :
        print(n)
        printN_To_1(n - 1) 
x =    int(input("enter the number :"))
printN_To_1(x)'''

'''def print1_To_N(n) :
    if n == 1 :
        print("1") 
    else :
        print1_To_N(n - 1)
        print(n)
x =  int(input("enter the number :"))
print1_To_N(x)'''

'''n = int(input("enter the number :"))
z = 0
for i in range (1 , n + 1) :
    z += 1
    print(z)'''

'''n = int(input("enter the number N :"))
sum = 0
for i in range (1 , n + 1) :
    sum += i
print("the sum from 1 to N is :" , sum)'''

'''def sum (n) :
    if n == 1 :
        return 1
    else :
        add = n + sum (n - 1)
    return add
x = int(input("enter the number N :"))
print("the sum from 1 to N is :" , sum (x) )'''

'''a = int(input("enter the base number a :"))
b = int(input("enter the power number b :"))
z = a ** b
print("a raised to the power b is :" , z)'''

'''def power (b) :
    if b == 1 :
        return x 
    else :
        product = x * power(b - 1)
    return product
x = int(input("enter the base number a :"))
y = int(input("enter the power number b :"))
print("a raised to the power b is :" , power (y))'''

'''def fibonacci (n) :
    if n == 1 :
        return 0
    elif n == 2 :
        return 1
    else :
        z = fibonacci ( n - 1) + fibonacci(n - 2)
    return z
x = int(input("enter the number of terms in the fibonacci series :"))
for i in range (1 , x + 1) :
    print(i , ".  " , fibonacci (i) )'''

'''n = int(input("enter the number of steps in stairs :"))
for i in range (n) :
    print(" " *( n - i ) , end="")
    print("_")
    print(" " *( n - i ) , end="")
    print("|")
print("_")'''

'''n = int(input("enter a positive integer :"))
if n % 2 == 0 :
    print("this is an even integer")
else :
     print("this is an odd integer")'''

'''n = int(input("enter a positive integer :"))
if n % 5 == 0 :
    print("the number is divisible by 5")
else :
    print("the number is not divisible by 5")'''

''''n = int(input("enter a year :"))
if n % 4 == 0 :
    print("the year is leap year")
else :
    print("the year is not leap year")'''

'''n = float(input("enter a number :"))
z = n // 1
print("the greatest integer less than or equal to the input number is :" , z)'''

'''n = int(input("enter a integer :"))
if n >= 0 :
    print("the absolute value is :" , n)
else :
    print("the absolute value is :" , (n * (-1)))'''

'''cost_price = float(input("enter the cost price :"))
selling_price = float(input("enter the selling price :"))
if cost_price > selling_price :
    print("loss :" , cost_price - selling_price)
elif cost_price < selling_price :
    print("profit :" , selling_price - cost_price)
else :
    print("no profit , no loss")'''

'''a = float(input("enter the length :"))
b = float(input("enter the breadth :"))
area = a * b
perimeter = 2 * (a + b)
if area > perimeter :
    print("area of the rectangle is greater than its perimeter")
elif area < perimeter :
    print("area of the rectangle is less than its perimeter")
else :
    print("area of the rectangle is equal than its perimeter")'''

'''n = int(input("enter a positive integer :"))
if 100 <= n <= 999 :
    print("the integer is a three digit number")
else :
    print("the integer is not a three digit number")'''

'''n = int(input("enter a positive integer :"))
if n % 5 == 0 and n % 3 == 0 :
    print("the number is divisible by both 3 and 5")
else :
    print("the number is not divisible by both 3 and 5") '''

'''n = int(input("enter a positive integer :"))
if n % 15 == 0 :
    print("the number is divisible by both 3 and 5")
else :
    print("the number is not divisible by both 3 and 5") '''

'''n1 = int(input("enter the positive integer1 :"))
n2 = int(input("enter the positive integer2 :"))
n3 = int(input("enter the positive integer3 :"))
if n1 >= n2 and n1 >= n3 :
    print("the greatest of the three numbers is :" , n1)
elif n2 >= n1 and n2 >= n3 :
    print("the greatest of the three numbers is :" , n2)
else :
    print("the greatest of the three numbers is :" , n3)'''

'''l1 = float(input("enter the length of side1 :"))
l2 = float(input("enter the length of side2 :"))
l3 = float(input("enter the length of side3 :"))
if (l1 + l2) > l3 and (l2 + l3) > l1 and (l3 + l1) > l2 :
    print("the numbers can be the sides of a triangle")
else :
    print("the numbers can not be the sides of a triangle")'''

'''ram = int(input("enter the age of ram :"))
shyam = int(input("enter the age of shyam :"))
ajay = int(input("enter the age of ajay :"))
if ram < shyam and ram < ajay :
    print ("ram is the youngest")
elif shyam < ram and shyam < ajay :
    print ("shyam is the youngest")
else :
    print ("ajay is the youngest")'''

'''n = int(input("enter a positive integer :"))
if n % 3 == 0 or n % 5 == 0 :
    if n % 15 == 0 :
        print("the number is divisible by 3 or 5 and also divisible by 15")
    else :
        print("the number is divisible by 3 or 5 and but not divisible by 15")
else :
    print("the number is neither divisible by 3 nor divisible by 5")'''

'''n = float(input("enter your percentage marks :"))
if 100 >= n >= 90 :
    print("excellent")
elif 90 > n >= 80 :
    print("very good")
elif 80 > n >= 70 :
    print("good")
elif 70 > n >= 60 :
    print("can do better")
elif 60 > n >= 50 :
    print("average")
elif 50 > n >= 40 :
    print("below average")
elif n < 40 :
    print("fail")'''

'''x1 = float(input("x1 :"))
y1 = float(input("y1 :"))
x2 = float(input("x2 :"))
y2 = float(input("y2 :"))
x3 = float(input("x3 :"))
y3 = float(input("y3 :"))
z1 = (y2 - y1) / (x2 - x1)
z2 = (y3 - y2) / (x3 - x2)
if z1 == z2 :
    print("all the three points fall one straight line")
else :
    print("all the three points donot fall one straight line")'''

x = float(input("x :"))
y = float(input("y :"))
if x == 0 and y != 0:
    print("the point lies on Y axis")
elif y == 0 and x != 0 :
    print("the point lies on X axis")
elif x == 0 and y == 0 :
    print("the point is at origin")
else :
    print("the point neither lies on X axis nor Y axis nor at origin")







