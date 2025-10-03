# fibonacci sequence
def fibonacci (n) :
    if n == 1 :
        return 0
    elif n == 2 :
        return 1
    else :
        return (fibonacci(n - 1) + fibonacci(n -2))
r = int(input("enter the lemgth of series :"))
for i in range (1 , r + 1) :
    print (fibonacci(i) , end=" ")
