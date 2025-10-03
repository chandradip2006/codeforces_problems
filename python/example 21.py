'''text = "the unexpected always happens"
print(text)
print(len(text))
if "pp" in text :
    print("the phrase PP is present in the string.")
else :
    print("the phrase PP is not present in the string.")
print(text[ : 11])
new_text = text . replace("always" , "never")
print(new_text)
str = ", no matter what"
final_str = text + str 
print(final_str)'''

# checking a string  palindrome or not
str1 = input("enter a word :")
str2 = str1[::-1]
if str1 == str2 :
    print("the word is a palindrome")
else :
     print("the word is not a palindrome")

