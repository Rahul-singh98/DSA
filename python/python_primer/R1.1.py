# Python program to define is_multiple function.

def is_multiple(n , m):
    """
      To check if a number n is multiple of m or not.

      Parameter:
	    n = iterable.
	    m = iterable.

      return:
	    True if n is multiple of m else False.
    """
    return bool(n%m)

if __name__ == "__main__":
    n = int(input("Value of n :"))
    m = int(input("Value of m :"))

    print(is_multiple(n, m))
