## Python code to demostrate working of arrays.

import array

# array - This function is used to create array using datatype and list of values.
arr = array.array('i' , [1,2,3,4,5])

print(arr)
print('\n')

# Append - append is used to append a value or a list at the end the array.
arr.append(6)
print('*' * 10 , 'Append' , '*' * 10)
print(arr)
print('\n')

# Insert - insert is used to insert a value at the position specified in the argument.
arr.insert(1,100)
print('*' * 10 , 'Insert' , '*' * 10)
print(arr)
print('\n')

# Pop - pop is used to remove a value at the position specified in the argument else remove from the last and returns it.
arr.pop()
print('*' * 10 , 'Pop' , '*' * 10)
print(arr)
print('\n')

# Remove - remove is used to remove the first occurence of the value specified in the argument
arr.remove(100)
print('*' * 10 , "Remove" , '*' * 10)
print(arr)
print('\n')

# Index - index is used to return the first occurance of the value mentioned in the argument
print('*'*10 , 'Index' , '*'*10)
print(arr.index(3))
print('\n')

# Reverse - reverse is used to reverse the array
arr.reverse()
print('*' * 10 , 'Reverse' , '*'* 10)
print(arr)
print('\n')
