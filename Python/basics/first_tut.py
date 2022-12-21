# ## Datatypes in python

# # Datatypes
# # int, string, list, tuple, set, frozen_set, dict, bool, None, object

# # int 
# x = 10
# print(x)

# # str
# string = "absc"
# print(string)

# # list
# mylist = list()
# mylist = []

# print("before", mylist)
# mylist.append(10)
# mylist.append("mystring")
# print("after", mylist)

# print(mylist.pop())
# print(mylist.pop(0))

# # tuple
# mytuple = tuple()
# try:
#     mytuple[1]
# except Exception as e:
#     print(e)

# mytuple = list(mytuple)
# mytuple.append(10)
# print(mytuple, type(mytuple))


# # set 
# set1 = set([1, 2,3 , 4])
# set2 = set([12, 3, 3,4])

# print(set1.union(set2))

# # dict
# mydict = dict()
# mydict = {}

# key = 10
# value = 1000
# mydict[key] = value

# print(mydict)

# key = "rahul"
# value = "Rajput"
# mydict[key] = value
# print(mydict)


# Mutable
# list, dict, frozen_set, set


# Immutable
# int, string, tuple
# x = 10
# print(id(x))

# x = 20

# print(id(x))

key = ('1', '2')
value = 1234

mydict = dict()

mydict[key] = value

print(mydict)