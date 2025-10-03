# creating dictionary
#phones = {
#    "john" : 648387390 ,
#    "ria" : 7637372947 ,
#    "joy" : 895902849
#}
#print(phones)
'''print(type(phones))
print(len(phones))

# accessing items of dict
print(phones["john"])
print(phones . get ("john")) 

for i in phones:
    print (i)
    print(phones[i]) 

print(phones . keys())'''

# update value in dict
#phones["john"] = 755678755
#print(phones)

# adding elements in dict
'''phones ["kia"] = 754768757
print (phones)
phones ["joy"] = 546464635
print (phones) 
# updating dict
more_phones = {
    "kia" : 957943758,
    "pia" : 549589434, 
    "hia" : 984594500
}
phones . update (more_phones)
print (phones)

# remove elements in dict
phones . pop ("john")
print(phones)

phones . popitem() # this wll remove the last added item
print(phones)

#phones . clear () # this wll empty the while dict
#print(phones) 

# print elements of the dict
#for x in phones . items():
#    print(x)

for x , y in phones . items() :
    print( x , y) '''

# nested dictionaries
phones = {
    "area1" : {
        "x" : 0 ,
        "y" : 1 ,
        "z" : 2
    } ,
    "area2" : {
        "a" : 3 ,
        "b" : 4 ,
        "c" : 5   
    }
}
print(phones)
print(phones["area1"])
print(phones["area2"]["b"])

