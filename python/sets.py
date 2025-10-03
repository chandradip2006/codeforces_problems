# creating a set
'''names = { "sia" , "mia" , "tia"} 

print(type(names))
print(names)
names1 = list(names)
print(names1)
print(len(names))
print(type(names1))

for i in names1 :
    print(i , end=" ")


if "sia" in names :
    print(" \nsia is in the names")

# adding elements
names . add ("ria")
print(names)

#adding another sequence to a set
names_list = {"hia" , "kia"}
names. update(names_list)
print(names)

# removing element from a set
names . remove("hia")
print(names)
names . discard("pia")  # this function will not throw an error if value is not present in set
print(names)'''

s1 = {"a" , "b" , "c"}
s2 = {"a" , "d" , "e"}
print(s1 , s2)
#s3 = s1 . union(s2)
#print(s3)
#s1 . update(s2)
#print(s1)
#s1 . intersection_update (s2)
#print(s1)
'''s3 = s1 . union(s2)
s4 = s1 . intersection(s2)
s5 = s3 . difference(s4)
print(s5)'''
# OR
s1 . symmetric_difference_update(s2)
print(s1)


