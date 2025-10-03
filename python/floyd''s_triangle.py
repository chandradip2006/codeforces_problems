'''n = int(input("enter the no of rows: "))
a = 1
for i in range (1 , n + 1):
    for j in range (i):
        print(a , " " , end="")
        a = a + 1
    print()'''

# inverted floyd's triangle
n = int(input("enter the no of rows: "))
a = 1
for i in range (n):
    for j in range (n - i):
        print(a , " " , end="")
        a = a + 1
    print()