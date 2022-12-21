# ## Functions

# # Basic function

# def myCoolFunc(atr, vwap):
#     print(atr)
#     print(vwap)

# # myCoolFunc(10, "rahul")

# def myCoolFunc2(atr: int, vwap: str) -> dict:
#     print(atr)
#     print(vwap)

# # print(myCoolFunc2("String", 100))

# def myCoolFunc3(atr: int, vwap: str) -> dict:
#     print(atr)
#     print(vwap)
#     return {"key": 2}

# print(type(myCoolFunc3("String", 100)))

# myfunc3 = lambda x, y: print(x)
# print(myfunc3())


def add(*args):
    ret = 0
    for i in args:
        ret += i
    return ret

print(add(1, 2, 3, 4))

def cool(**kwargs):
    print(kwargs['rahul'])


cool(rahul = 'hello world')
# ## Classes
# # public
# # protected
# # private

# class Codesure:
    
#     def __init__(self) -> None:
#         pass

#     def __new__(cls: type[Self]) -> Self:
#         pass


# x = Codesure()
# print(x)
