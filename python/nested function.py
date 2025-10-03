def outer_function () :
    x = a
    def inner_function () :
        y = b
        sum = x + y
        return sum
    return inner_function()
a = int(input("enter the number1 :"))
b = int(input("enter the number2 :"))
print("the sum is:" , outer_function () )