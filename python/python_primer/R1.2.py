# Python program to check if a number is even or not without using multipilcation , modulo and division operator

def is_even(k):
    """
        To check if a number is even or not.
    """

    while k<0:  
        k = k-2
    
    return bool(k)


if __name__ == "__main__":
    k = int(input("Enter the value of k: "))
    print(is_even(k))