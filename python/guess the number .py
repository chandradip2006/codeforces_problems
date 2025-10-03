import random
target = random . randint(1 , 100)
while True :
    user_choice = int (input("guess the target :"))
    if user_choice == target :
        print("success , correct guess !!")
        break
    elif user_choice < target :
        print("your number is too small , take a bigger number")
    else :
        print("your number is too big , take a smaller number")


print ("-------GAME OVER--------")