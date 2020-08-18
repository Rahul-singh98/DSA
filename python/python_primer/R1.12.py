# Python program to implement choice function in random module.

import random

def choice(data):
    """
        Function to return a random element from a non-empty sequence.
    """
    return data[random.randrange(len(data))]


if __name__== "__main__":
    data = [1000 , 123 , 32 , 52 , 6433 , 982]
    print(choice(data))