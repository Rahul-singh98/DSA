def appendNtimesUsingStringConcat(c: str, n: int) -> str:
    out_str = ""
    for i in range(n):
        out_str += c    # O(s) where s = length(out_str)
        
    return out_str
    
# O(n)
def appendNtimesUsingStringJoin(c: str, n: int) -> str:
    list = []
    for i in range(n):
        list.append(c);   # O(1)
        
    return "".join(list)