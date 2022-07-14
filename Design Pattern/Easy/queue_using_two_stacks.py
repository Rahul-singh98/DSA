#User function Template for python3
# https://practice.geeksforgeeks.org/problems/Queue-using-stack/1#
# Implement a Queue using two stack s1 and s2.
class Queue:
    s1 = []
    s2 = []
    
    def enqueue(self,X):
        while(len(self.s1) != 0):
            self.s2.append(self.s1[-1])
            self.s1.pop()
            
        self.s1.append(X)
        
        while(len(self.s2) != 0):
            self.s1.append(self.s2[-1])
            self.s2.pop()
        
    def dequeue(self):
        if len(self.s1) == 0:
            return -1
            
        val = self.s1[-1]
        self.s1.pop()
        
        return val

#{ 
#  Driver Code Starts
if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        ob=Queue()
        n = int(input())
        a = list(map(int,input().strip().split()))
        i = 0
        while i<len(a):
            if a[i] == 1:
                ob.enqueue(a[i+1])
                i+=1
            else:
                print(ob.dequeue(),end=" ")
            i+=1

        print()
# } Driver Code Ends