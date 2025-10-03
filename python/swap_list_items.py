n = int(input("enter the size of list :"))
list = []
for i in range(1,n + 1) :
    num =  int(input())
    list . append(num)

print(list)
idx1 = int(input("enter index no1 :"))
idx2 = int(input("enter index no2 :")) 
temp = list[idx1]
list[idx1] = list[idx2]
list[idx2] = temp
print(list)

