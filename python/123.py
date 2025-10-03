r = int(input())
n = int(input("enter a number: "))
z = str(n)
l = len(z)
for j in range (l):
        z[j] = z[j] - r
for j in range(l):
    print(z[j] , " ")