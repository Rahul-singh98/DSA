# Python program to return min and max value of the input data

def minMax(data):
    """
        This program returns the minimum and the maximum value as a tuple
    """
    ## Method 1 
    # min = data[0]
    # max = data[0]
    # for i in data:
    #     if i < min:
    #         min = i
    #     elif i > max :
    #         max = i 

    # return min,max

    ## Method 2 
    data.sort()
    return data[0] , data[-1]

if __name__ == "__main__":
    done = False 
    data = []
    print("Input data (one input per line or use extra line to exit) ")
    while not done:
        n = input()

        if n == "":
            done = True
        else:
            n = int(n)
            data.append(n)
    
    print(minMax(data))
