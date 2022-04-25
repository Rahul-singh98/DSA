from typing import List

class Solution:
    def __init__(self , s:List[str]):
        self.reverseString(s)

    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        if(len(s)==0):
            return
        temp = s[0]
        s.pop(0)
        self.reverseString(s)
        s.append(temp)

if __name__=='__main__':
    _list = ['h' , 'e' , 'l' , 'l' , 'o']
    obj = Solution(_list)
    print(_list)

        