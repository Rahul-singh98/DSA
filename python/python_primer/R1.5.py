# Python program to comprehesiate R1.4 

n = int(input("Input positive interger n "))
sum = (i**2 for i in range(n+1))
k = 0
for i in sum:
    k += i

print(k)
