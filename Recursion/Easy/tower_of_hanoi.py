# User function Template for python3
# https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1#
# The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of
# the puzzle is to move the entire stack to another rod. You are given the number of discs N.
# Initially, these discs are in the rod 1. You need to print all the steps of discs movement
# so that all the discs reach the 3rd rod. Also, you need to find the total moves.
# Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc
# is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on 
# the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.
class Solution:
    def toh(self, N, fromm, to, aux):
        if(N == 0):
            return 0
            
        count1 = self.toh(N-1, fromm, aux, to);
        print("move disk", N , "from rod", fromm, "to rod", to)
        count2 = self.toh(N-1, aux, to, fromm)
        
        return count1 + count2 + 1

#{ 
#  Driver Code Starts
# Initial Template for Python 3


import math


def main():

    T = int(input())

    while(T > 0):
        N = int(input())
        ob = Solution()
        print(ob.toh(N, 1, 3, 2))
        T -= 1
if __name__ == "__main__":
    main()


# } Driver Code Ends