#User function Template for python3
# https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
# Given arrival and departure times of all trains that reach a railway station. Find the minimum number
# of platforms required for the railway station so that no train is kept waiting.
# Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure
# time can never be the same for a train but we can have arrival time of one train equal to departure
# time of the other. At any given instance of time, same platform can not be used for both departure 
# of a train and arrival of another train. In such cases, we need different platforms.
class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        times = []
        for i in range(n):
            times.append([dep[i], 'd'])
            times.append([arr[i], 'a'])
            
        # Sort the array
        times = sorted(times, key = lambda x: x[1])
        times = sorted(times, key = lambda x: x[0])
        
        # print(times)
        result, plat_needed = 0, 0
    
        for i in range(2 * n):
            
            # If its 'a' then add 1 to plat_needed
            # else minus 1 from plat_needed.
            if times[i][1] == 'a':
                plat_needed += 1
                result = max(plat_needed, result)
            else:
                plat_needed -= 1
        
        return result


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        arrival = list(map(int, input().strip().split()))
        departure = list(map(int, input().strip().split()))
        ob=Solution()
        print(ob.minimumPlatform(n,arrival,departure))
# } Driver Code Ends