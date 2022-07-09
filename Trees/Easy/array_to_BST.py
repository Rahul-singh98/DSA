# https://practice.geeksforgeeks.org/problems/array-to-bst4443/1#
class Solution:
    ans = []
    def sortedArrayToBST(self, nums):
        self.ans = []
        self.solve(nums, 0, len(nums)-1)
        
        return self.ans
        
    def solve(self, nums, l, r):
        if(l > r):
            return
        
        m = (l + r) // 2
        self.ans.append(nums[m])
        
        self.solve(nums, l, m - 1)
        self.solve(nums, m + 1, r)

#{ 
#  Driver Code Starts
if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n = int(input())
        nums = list(map(int, input().split()))
        obj = Solution()
        ans = obj.sortedArrayToBST(nums)
        for _ in ans:
            print(_, end = " ")
        print()

# } Driver Code Ends