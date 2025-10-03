# calculating area of circle
'''r = float(input("enter the radius of the circle :"))
a = (3.1415) * (r ** 2)
print("the area of the circle is :" , a)'''

# calculating simple interest
'''p = float(input("enter the principle :"))
r = float(input("enter the rate of interest(yearly) in percentage :"))
t = float(input("enter the interval of time :"))

i = (p * r * t) / 100
print("your simple interest is :" , i)'''

# calculating the volume of sphere
'''r = float(input("enter the radius of the sphere :"))
v = (4 / 3) * (3.1415) * (r ** 3)
print("the volume of the sphere is :" , v)'''

# square of an integer
'''n = int(input("enter an integer :"))
s = n ** 2
print("the square of the integer is :" , s)'''

# take two numbers and add them
'''x = float(input("enter the number1 :"))
y = float(input("enter the number2 :"))
z = x + y
print("the sum of the two numbers is :", z)'''

# take an integer and print half of it
'''n = int(input("enter an integer :"))
z = n / 2
print("the half of the integer is :" , z)'''

# determine a positive integer even or odd
'''n = int(input("enter an integer :"))
if n % 2 == 0 :
    print(n , "is an even number")
else :
    print(n , "is an odd number")'''

# determine a number divisible by 5 or not
'''n = int(input("enter an integer :"))
if n % 5 == 0 :
    print("the number is divisible by 5")
else :
    print("the number is not divisible by 5")'''

#determine the absolute value
'''x = int(input("enter the integer :"))
if x >= 0 :
    print("the absolute value is :" , x)
else :
    print("the absolute value is :" , x * (-1))'''

# determine the profit ~ loss
'''x = float(input("enter the cost price :"))
y = float(input("enter the selling price :"))
if x > y :
    print("loss :" , x - y)
elif x < y :
    print("profit:" , y - x)
else :
    print("no profit , no loss")'''

#determine whether the area of the rectangle is greater than its perimeter or not
'''l = float(input("enter the length :"))
b = float(input("enter the breadth :"))
a = l * b
p = 2 * (l + b)
if a > p :
    print("the area of the rectangle is greater than its perimeter")
else :
    print("the area of the rectangle is not greater than its perimeter")'''

# determine a number three digited or not
'''n = int(input("enter the integer :"))
if 999 >= n >= 100 :
    print("the integer is a three digited integer")
else :
    print("the integer is not a three digited integer")'''

# determine a number divisible by both 3 and 5
'''n = int(input("enter the integer :"))
if n % 3 == 0 and n % 5 == 0 :
    print("the number is divisible by both 3 and 5")
else :
    print("the number is not divisible by both 3 and 5")'''

# sides of a triangle
'''l1 = float(input("enter the length of side1 :"))
l2 = float(input("enter the length of side2 :"))
l3 = float(input("enter the length of side3 :"))
if l1 + l2 > l3 and l2 + l3 > l1 and l1 + l3 > l2 :
    print("the sides form a triangle")
else :
    print("the sides donot form a triangle")'''

# determine the greatest of the numbers
'''a = int(input("enter the integer1 :"))
b = int(input("enter the integer2 :"))
c = int(input("enter the integer3 :"))
if a > b and a > c :
    print(a , "is the the greatest number")
elif a < b and b > c :
    print(b , "is the the greatest number")
else :
    print(c , "is the the greatest number")'''

# determine the least of the numbers
'''a = int(input("enter the integer1 :"))
b = int(input("enter the integer2 :"))
c = int(input("enter the integer3 :"))
if a < b and a < c :
    print(a , "is the the least number")
elif a > b and b < c :
    print(b , "is the the least number")
else :
    print(c , "is the the least number")'''

# determine a number divisible by 3 or 5 but not divisible by 15
'''n = int(input("enter the integer :"))
if n % 3 == 0 or n % 5 == 0 :
    if n % 15 == 0 :
        print("the number is divisible by 3 or 5 and also divisible by 15 ")
    else :
        print("the number is divisible by 3 or 5 but not divisible by 15 ")
else :
    print("the number is not divisible by 3 or 5")'''

# determine the youngest of three
'''a = int(input("enter the age of ram :"))
b = int(input("enter the age of shyam :"))
c = int(input("enter the ajay :"))
if a < b and a < c :
    print("ram is the youngest of the three")
elif a > b and b < c :
    print("shyam is the youngest of the three")
else :
    print("ajay is the youngest of the three")'''

#percentage grade of marks
'''p = float(input("enter your percentage marks :"))
if 100 >= p > 80 :
    print ("very good")
elif 80 >= p > 60 :
    print("good")
elif 60 >= p > 40 :
    print("average")
elif 40 >= p >= 0 :
    print("fail")'''

# determine the position of a point
'''x = float(input("enter the X coordinate(abcissa) :"))
y = float(input("enter the Y coordinate(ordinate) :"))
if x > 0 and y > 0 :
    print("the point lies on 1st quadrant")
elif x > 0 and y < 0 :
    print("the point lies on 4th quadrant")
elif x < 0 and y > 0 :
    print("the point lies on 2nd quadrant")
elif x < 0 and y < 0 :
    print("the point lies on 3rd quadrant")
elif y == 0 and x != 0 :
    print("the point lies on X axis")
elif x == 0 and y != 0:
    print("the point lies on Y axis")
else :
    print("the point lies at origin")'''

# calculator using operators
'''n1 = float(input("enter the number1 :"))
n2 = float(input("enter the number2 :"))
print ("the operators are : + - * / ** // %")
opt = input("enter the operator :")
match opt :
    case("+") :
        print("the sum is :" , n1 + n2)
    case("-") :
        print("the difference is :" , n1 - n2)
    case("*") :
        print("the product is :" , n1 * n2)
    case("/") :
        print("the division is :" , n1 / n2)
    case("**") :
        print("the exponential is :" , n1 ** n2)
    case("//") :
        print("the floor division is :" , n1 // n2)
    case("%") :
        print("the remainder is :" , n1 % n2)'''

# printing n times
'''n = int(input("enter the no of times to be printed :"))
str = input("write the word to be printed :")
for i in range (n) :
    print(str)'''

# number printing
'''n = int(input("enter the number upto which the numbers are printed :"))
for i in range (1 , n + 1) :
    print(i)'''

# printing the even numbers
'''n = int(input("enter the number upto which the numbers are printed :"))
for i in range (2 , n + 1 , 2) :
    print(i)'''

# printing the odd numbers
'''n = int(input("enter the number upto which the numbers are printed :"))
for i in range (1 , n + 1 , 2) :
    print(i)'''

# printing number tables
'''n = int(input("enter the number :"))
for i in range (1 , 11) :
    print(i , ":" , n * i)'''

# printing an AP
'''n = int(input("enter the number of terms of an AP :"))
a = int(input("enter the first term :"))
d = int(input("enter the common difference :"))
for i in range (n) :
    z = a + (i * d)
    print(z)'''

# printing a GP
'''n = int(input("enter the number of terms of a GP :"))
a = int(input("enter the first term :"))
r = int(input("enter the common ratio :"))
for i in range (n) :
    print(a * (r ** i))'''

# highest factor(important)
'''n = int(input("enter the number :"))
for i in range (1 , n + 1) :
    if n % i == 0 :
        print(i)'''

# prime or composite
'''n = int(input("enter the number :"))
list = []
for i in range (1 , n + 1) :
    if n % i == 0 :
        list.append(i)
z = len(list)
if z == 1 :
    print("neither composite , nor prime")
elif z == 2 :
    print("this is a prime number")
else :
    print("this is a composite number")'''

# counting digits of a number
'''n = int(input("enter the number :"))
str1 = str(n)
print("the no of digits in the number is :" , len(str1))'''

# printing sum of the digits
'''n = int(input("enter the number :"))
str1 = str(n)
l = len(str1)
z = 0
for i in range (l) :
    z += int(str1[i])
print("the sum of the digits of the number :" , z)'''

# product of the digits
'''n = int(input("enter the number :"))
str1 = str(n)
l = len(str1)
z = 1
for i in range (l) :
    z *= int(str1[i])
print("the product of the digits of the number :" , z)'''

# sum of even digits
'''n = int(input("enter the number :"))
str1 = str(n)
l = len(str1)
z = 0
for i in range (l) :
    if int(str1[i]) % 2 == 0 :
        z += int(str1[i]) 
    else :
        continue
print("the sum of even digits is :" , z )'''

# reversing a number
'''n1 = int(input("enter the number :"))
str1 = str(n1)
str2 = str1[:: -1]
n2 = int(str2)
print("the reverse number is :" , n2)'''

# sum of a number and its reverse
'''n1 = int(input("enter the number :"))
str1 = str(n1)
str2 = str1[:: -1]
n2 = int(str2)
print("the sum of a number and its reverse is :" , n1 + n2)'''

# factorial of a number
'''n = int(input("enter the number :"))
z = 1
for i in range (1 , n + 1) :
    z *= i 
print("the factorial of the number is :" , z)'''

# ascii values and corresponding characters
'''i = 0
while i < 26 :
    print("ascii value :" , 65 + i , "& character :" , chr(65 + i))
    i += 1'''

# pattern printing
'''r = int(input("enter the no of rows :"))
c = int(input("enter the no of columns :"))
for i in range (r) :
    print("*" * c)'''

'''n = int(input("enter the no of rows :"))
for i in range (n):
    for j in range (1 , n + 1) :
        print(j , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (n) :
    for j in range (n) :
        print(chr(65 + j) , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (n) :
        print(chr(65 + i) * n)'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print("*" * i)'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    for j in range (1 , i + 1) :
        print(j , end="")
    print()'''

'''n = int (input("enter the no of rows :"))
for i in range (1 , n + 1) :
    for j in range (i) :
        print(chr(65 + j) , end="")
    print()'''

'''n = int(input("enter the number :"))
for i in range (1 , n + 1) :
    for j in range (1 , 2 * i):
        print(j , end="")
    print()
    for k in range (2 * i) :
        print(chr(65 + k) , end="")
    print()
for r in range (1 , 2 * n + 2):
    print(r , end="")'''

'''n = int(input("enter the no of rows :"))
for i in range (n) :
    print("*" * (n - i))'''

'''n = int(input("enter the no of rows :"))
for i in range (n) :
    for j in range (1 , (n - i + 1)) :
        print(j , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    for j in range(n - i + 1):
        print(i , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    for j in range (1 , i + 1) :
        print(n - j + 1 , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (n):
    for j in range (n - i):
        print(chr(65 + j) , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    for j in range (1 , 2 * i , 2) :
        print(j , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("*" * i)'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    for j in range (1 , i + 1) :
        print(j , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    for j in range (i) :
        print(chr(65 + j) , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("*" * n)'''
'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("*" * (2 * i - 1))'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    for j in range (1 , 2 * i) :
        print(j , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    for j in range (2 * i - 1) :
        print(chr(65 + j) , end="")
    print()'''

'''n = int(input("enter the no of rows :"))
for i in range (1 , n + 1) :
    print(" " * (n - i + 1) , end="")
    print("*" * (2 * i - 1))
print("*" * (2 * n + 1))
for i in range (1 , n + 1) :
    print(" " * i , end="")
    print("*" * (2 * (n - i ) + 1))'''

'''def Nto1 (n):
    if n == 1 :
        print(1)
    else :
        print(n)
        Nto1(n - 1)
r = int(input("enter the natural number :"))
Nto1(r)'''

'''def onetoN (n):
    if n == 1 :
        print(1)
    else :
        onetoN(n - 1)
        print(n)
r = int(input("enter the natural number :"))
onetoN(r)'''

'''n = int(input("enter the natural number :"))
for i in range (1 , n + 1) :
    print(i)'''

'''n = int(input("enter the natural number :"))
for i in range (n) :
    print(n - i)'''

'''n = int(input("enter the number of natural number upto which the sum is found :"))
z = 0
for i in range (1 , n + 1) :
    z += i
print("the sum of the natural numbers is :" , z)'''

'''def sum1toN (n) :
    if n == 1 :
        return 1
    else :
        z = n + sum1toN(n - 1)
    return z
r = int(input("enter the number of natural number upto which the sum is found :"))
print("the sum of the natural numbers is :" , sum1toN(r))'''

'''def factorial (n) :
    if n == 1 :
        return 1
    else :
        z = n * factorial (n - 1)
    return z
r = int(input("enter the number of natural number of which the factorial is found :"))
print("the factorial is :" , factorial(r))'''

'''def power (b) :
    if b == 1 :
        return a
    else :
        z = a * power(b - 1)
    return z
a = int(input("enter the base a :"))
b = int(input("enter the power b :"))
print("the value of a raised to the power b is :" , power(b))'''

'''def fibonacci (n) :
    if n == 1 :
        return 1
    elif n == 2 :
        return 1
    else :
        z = fibonacci(n - 1) + fibonacci(n - 2)
    return z
r = int(input("enter the total no of terms in a fibonacci series :"))
for i in range (1 , r + 1) :
    print(fibonacci(i))'''

'''n = int(input("enter the number :"))
str1 = str(n)
l = len(str(n))
z = 1
for i in range (l) :
    z *= int(str1[i])
print("the product of the digits :" , z)'''

# divisors of a number
'''n = int(input("enter the number :"))
for i in range (1 , n + 1) :
    if n % i == 0 :
        print(i)
    else :
        continue'''

#determine the maximum term of a list
'''list = []
n = int(input("enter the no of elements in the list :"))
for i in range (n) :
    t = int(input("enter the terms of the list :"))
    list . append(t)
print(list)
print("the maximum term is :" , max(list))'''

# determine the minimum term of a list
'''list = []
n = int(input("enter the no of elements in the list :"))
for i in range (n) :
    t = int(input("enter the terms of the list :"))
    list . append(t)
print(list)
print("the minimum term is :" , min(list))'''

'''n = int(input("enter the no of elements in the list :"))
list = []
for i in range (1 , n + 1) :
    list . append (i ** 2)
print(list)'''

'''list = []
n = int(input("enter the no of elements in the list :"))
for i in range (n) :
    t = int(input("enter the terms of the list :"))
    list . append(t)
print(list)
for i in range (0 ,n , 2) :
    list[i] *= 2
for j in range (1 , n , 2) :
    list[j] += 10
print(list) '''

'''list1 = []
n = int(input("enter the no of elements in the list :"))
for i in range (n) :
    t = int(input("enter the terms of the list :"))
    list1 . append(t)
print(list1)
x = int(input("enter an input number :"))
list2 = []
for k in list1 :
    if k > x :
        list2 . append(k)
    else :
        continue
l = len(list2)
print("the number of elements greater than the input number : " , l)'''

'''list1 = []
n = int(input("enter the no of elements in the list :"))
for i in range (n) :
    t = int(input("enter the terms of the list :"))
    list1 . append(t)
print(list1)
x = 0
for i in range (0 , n , 2) :
    x += list1[i]
y = 0
for j in range (1 , n , 2) :
    y += list1[j]
print("the difference between the sum of elements at even indices to the sum of odd indices is :" , x - y)'''

'''n1 = int(input("enter a number :"))
str1 = str(n1) 
str2 = str1[::-1]
n2 = int(str2)
print("the reverse of the number is :" , n2)'''

'''n1 = int(input("enter a number :"))
str1 = str(n1) 
str2 = str1[::-1]
n2 = int(str2)
if n1 == n2 :
    print("the number is a palindrome")
else:
    print("the number is not a palindrome")'''

#------------------error--------------------#
# second latgest element
''''list1 = []
n = int(input("enter the no of elements in the list :"))
for i in range (n) :
    t = int(input("enter the terms of the list :"))
    list1 . append(t)
print(list1)
z = max(list1)
for k in list1 :
    if k != z and z - k is min :
        print("the second largest element is :" , k)
    else :
        continue'''
# -----------------error-----------------------#

'''def print_rectangle(width, height):
    for i in range(height):
        if i == 0 or i == height - 1:
            print('*' * width)
        else:
            print('*' + ' '* (width - 2) + '*')

print_rectangle(10, 5)'''

'''n = int(input("enter the no of rows :"))
print("*" * (2 * n - 2))
for i in range (n - 2) :
    print("*" + " " * (2 * (n - 2)) + "*")
print("*" * (2 * n - 2))'''

''''n = int(input("enter the number :"))
for i in range (n) :
    print(" " * i , end="")
    print("*" , end="")
    print(" " * (2 * (n - i) - 1) , end="")
    print("*" , end="")
    print(" " * i)
print(" " * n + "*" + " " * n)
for j in range (n) :
    print(" " * (n - j - 1) , end="")
    print("*" , end="")
    print(" " * (2 * j + 1) , end="")
    print("*" , end="")
    print(" " * (n - j))'''

'''str = input("write a word :")
list = ["a" , "e" , "i" , "o" , "u"]
list1 = []
for i in str :
    if i in list :
        list1 . append(i)
    else :
        continue
l = len(list1)
print("the no of vowels in the word is :" , l)'''

# -----------------error----------------
'''str1 = input("enter a string :")
l = len(str1)
for i in range (1 , l , 2) :
    (str1[i]) = "a"
print("the new string is :" , str1)'''
# -----------------error-----------------

'''str1 = input("enter a string of length greater than 5 :")
str2 = str1[1 : 5]
str3 = str2[::-1]
str4 = str1[:1] + str3 + str1[5:]
print("the new string is :" , str4)'''

'''n = int(input("enter a number :"))
str1 = str(n)
l = len(str1)
print("the number of digits in the number is :" , l)'''

str1 = input("enter a string :")
l = len(str1)
n = l / 2
z = int(n)
str2 = str1[:z]
str3 = str2[::-1]
str4 = str3 + str1[z :]
print("the nwe string is :" , str4)













