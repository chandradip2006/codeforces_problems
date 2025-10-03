# calcultor program
x = int(input("enter the number1 :"))
y = int(input("enter the number2 :"))

print("the correct oprators are + - * /")
operators = input("enter the operator:")
match operators :
    case "+":
        print("sum :", x + y)
    case "-":
        print("difference :", x - y)
    case "*":
        print("multiplication :", x * y)
    case "/":
        print("division :", x / y)
    case _ :
        print("enter the valid operator")