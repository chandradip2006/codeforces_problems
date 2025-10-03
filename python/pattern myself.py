n = int(input("enter n :"))
'''for i in range (1, n+1) :
    print("*" * i)'''
for i in range (n) :
    for j in range (i + 1) :
        print(chr(65 + j) , end="")
    print()