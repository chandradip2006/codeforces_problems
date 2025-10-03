def multiply_large_numbers(num1: str, num2: str) -> str:
    """
    Multiplies two large integers represented as strings and returns the result as a string.
    
    :param num1: String representation of the first large integer.
    :param num2: String representation of the second large integer.
    :return: String representation of the multiplication result.
    """
    try:
        result = int(num1) * int(num2)
        return str(result)
    except ValueError:
        return "Invalid input. Please enter valid integers."

if __name__ == "__main__":
    num1 = input("")
    num2 = input("")
    print( multiply_large_numbers(num1, num2))
