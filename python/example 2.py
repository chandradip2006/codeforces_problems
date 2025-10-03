# determine profit or loss or no profit no loss and also determine the profit or loss
x = float(input("enter cost price:"))
y = float(input("enter selling price:"))
if x > y :
    loss = x - y
    print("loss :", loss)
elif x < y :
    profit = y - x
    print("profit :", profit)
else :
    print("no profit no loss")