# pattern printing
# q no 1
n = int(input("enter n:"))
for _ in range(n):
    for i in range ( 1 , n+1) :
        print(i, end="")
    print()

# q no 2
m = int(input("enter m:"))
for k in range (m) :
    for j in range (m) :
        print(chr(65 + j), end="")
    print()

# q no 3
x = int(input("enter x :"))
for t in range (1, x+1):
    for p in range (1 , t + 1):
        print(p , end="")
    print()

# q no 4
y = int(input("enter y :"))
for a in range (y):
    for b in range (a+1) :
        print(chr(65 + b), end="")
    print()