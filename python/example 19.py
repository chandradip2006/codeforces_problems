# print sum from 1 to n
'''n = int(input("enter the number1 :"))
z = 0
for i in range ( 1 , n + 1) :
    z += i
print("sum =" , z)'''

# OR
def sum_1_to_N (n) :
    if n == 0:
        return 0
    else :
        add = n + sum_1_to_N ( n - 1 )
    return add
r = int(input("enter the number2 :"))
print("sum =" , sum_1_to_N(r))

# find factorial of a number
def factorial (r) :
    if r == 0 :
        return 1
    else :
        product = r * factorial (r - 1)
    return product
x = int(input("enter the number3 :"))
print("factirial :" , factorial (x))

# calculating "a" raised to the power "b"
'''a = int(input("enter a :"))
b = int(input("enter b :"))
z = a ** b
print("a raised to the power b :" , z)'''

# OR
'''a = int(input("enter a :"))
b = int(input("enter b :"))
z = 1
for i in range (b) :
    z *= a
print("a raised to the power b :" , z)'''

# OR
'''a = int(input("enter a :"))
b = int(input("enter b :"))
i = 1
z = 1
while i <= b :
    z = z * a 
    i += 1
print("a raised to the power b :" , z)'''

# 0R
def power (x) :
    if x == 1 :
        return a 
    else :
        z = a * power( x - 1 )
    return z
a = int(input("enter a :"))
b = int(input("enter b :"))
print("a raised to the power b :" , power(b))

#or
def power_a_b (a , b) :
    if b == 0 :
        return 1
    else :
        power = a * power_a_b(a , b - 1)
    return power
a = int(input("enter a :"))
b = int(input("enter b :"))
print("a raised to the power b is :" , power_a_b(a , b))
