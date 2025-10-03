# determine factorial by recursion
def factorial(n) :
    #base case
    if n == 0 :
        return 1
    # recursive case
    else :
        ans = n * factorial(n - 1)
    return ans
        
r = int(input("enter the factorial no :"))
print("the value is :" , factorial(r))