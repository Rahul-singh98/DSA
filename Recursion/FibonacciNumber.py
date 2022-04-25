# Using Recursion
class Solution:
    def fib(self , n:int)->int:
        if(n<2):
            return n
        return self.fib(n-1)+ self.fib(n-2)

# # Using Memoization
# class Solution:
#     def fib(self, n: int) -> int:
#         cache ={}

#         def recr_fib(n:int)->int:
#             if(n in cache):
#                 return cache[n]
#             if(n<2):
#                 return n

#             result = recr_fib(n-1)+recr_fib(n-2)

#             cache[n] = result
#             return result

#         return recr_fib(n)