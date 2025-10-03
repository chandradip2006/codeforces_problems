l1 = [ 1 , 5 , 5, 10]
l2 = [ 3 , 4 , 5 , 5 , 10]
l3 = [ 5 , 5 , 10 , 20]

s1 = set(l1)
s2 = set(l2)
s3 = set(l3)

s4 = s1 . intersection(s2)
s5 = s3 . intersection(s4)
l4 = list(s5)
print(l4)