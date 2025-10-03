n=int(input())
sum=0
max_sum=-9999999999999
for i in range(n):
    x=int(input())
    sum+=x
    if max_sum<sum:
        max_sum=sum
    if sum<0:
        sum=0

print(max_sum)
