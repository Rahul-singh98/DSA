# Python function that takes a sequence of integer values and
# determines if there is a distinct pair of numbers in the sequence whose
# product is odd.

def product_of_two(data):
    """
        This function is used to determine if there is a distinct pair of numbers in the sequence whose product is odd.
    """
    length = len(data)
    count = 0
    for i in range(length):
        for j in range(i+1 , length):
            if (data[j] * data[i])%2 != 0:
                print(data[i] , data[j])
                count = count + 1

    if count == 0:
        print("Sorry no such pair found")


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
    
    product_of_two(data)