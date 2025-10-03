n = int(input("enter a number: "))
list = []
for i in range (1 , n + 1) :
    if n % i == 0:
        list . append(i)
    else :
        continue
l = len(list)
if l == 2:
    print("the number is a prime number")
else :
    print("the number is not a prime number")