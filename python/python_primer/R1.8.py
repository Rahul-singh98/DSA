# Python allows negative integers to be used as indices into a sequence,
# such as a string. If string s has length n, and expression s[k] is used for index 
# −n ≤ k < 0, what is the equivalent index j ≥ 0 such that s[j] references
# the same element
s = "RahulSingh"

for k in range(-1 , len(s)-1 , -1 ):
    j = k + len(s)
    print(s[k] , s[j])