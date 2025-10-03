'''n = int(input("emter row no :"))
for _ in range(n) :
    print("*" * 20)'''

n = int (input("enter a number :"))
for i in range (n) :
    print(" " * (2 * n) + "*")
print("* " * (2 * n + 1))
for j in range (n) :
    print(" " * (2 *n) + "*")