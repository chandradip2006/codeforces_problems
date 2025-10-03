n = int(input("enter a number: "))
list = []
for i in range (1 , n + 1):
    if n % i == 0 and i != n :
        list . append(i)
    else :
        continue
x = max(list)
print("the greatest factor of the number except itself: " , x)