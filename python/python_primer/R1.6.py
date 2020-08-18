# Python function to return sum of squares of all odd positive integers less than n

def oddSum(n):
    """
        This function returns the sum of all odd positive interges less than n
    """
    data = []
    sum = 0

    while n > 0:
        if (n%2) != 0:
            data.append(n**2)

        n = n-1
    
    for i in data:
        sum = sum + i

    return sum

if __name__== "__main__":
    n = int(input("Input a value of n: "))
    print(oddSum(n))