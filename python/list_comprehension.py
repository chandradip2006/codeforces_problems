fruits = [ "apples" , "mangoes", "bananas", "cherry"]
new_fruit = [fruit for fruit in fruits if "a" in fruit]
print(new_fruit)

new_fruit = fruits + new_fruit
print(new_fruit)

# nested list
fruits . insert(2 , ["kiwi","papaya"])
print(fruits)
print(fruits[2][0])