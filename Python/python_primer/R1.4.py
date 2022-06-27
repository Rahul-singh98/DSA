# Python program to return the sum of squares less than n

def square(k):
    """
        This function returns the square of k
    """

    return k*k

def square_sum(n):
    """
        This function returns the sum of squares.
    """
    k = 0
    while n:
        k = k + square(n)
        n = n-1

    return k


if __name__== "__main__":
    n = int(input("Input positive interger n "))
    print(square_sum(n))