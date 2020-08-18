# Python program to reverse a list of n variables.

def rev(data):
    """
        Function to reverse a given list of values
    """
    return data[::-1]

if __name__ == "__main__":
    print("Enter the input (one value in a single line)")
    done = False 
    data = []
    while not done:
        val = input()
        if val == "":
            done = True
        
        else :
            data.append(int(val))

    print(rev(data))
