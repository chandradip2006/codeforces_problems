# print numbers from n to 1
'''n = int(input("enter the number1 :"))
for i in range (n) :
    print(n - i)'''

# OR
def print_N_to_1 (r) :
    if r == 0 :
        return
    else :
        print(r)
        print_N_to_1( r - 1)
r = int(input("enter the number2 :"))
print_N_to_1(r)

# print numbers from 1 to n
'''x = int(input("enter the number3 :"))
for i in range (1 , x + 1) :
    print(i)'''

# OR
def print_1_to_N (x) :
    if x == 0 :
        return
    else:
        print_1_to_N(x - 1)
        print(x)
x = int(input("enter the number4 :"))
print_1_to_N(x)