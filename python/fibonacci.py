n = int(input("enter a number:"))
def fibonacci(i):
    if i == 1:
        return 1
    elif i == 2:
        return 1
    else:
        z = fibonacci(i - 1) + fibonacci(i - 2)
        return z
for k in range (1 , n):
    print(fibonacci(k) * fibonacci(k + 1))