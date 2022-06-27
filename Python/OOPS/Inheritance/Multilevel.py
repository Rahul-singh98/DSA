class Base(object):
     
    # Constructor
    def __init__(self, name):
        self.name = name
 
    # To get name
    def getName(self):
        return self.name
 
# Inherited or Sub class (Note Person in bracket)
class Child(Base):    
    # Constructor
    def __init__(self, name, age):
        Base.__init__(self, name)
        self.age = age
 
    # To get name
    def getAge(self):
        return self.age
 
# Inherited or Sub class (Note Person in bracket)
class GrandChild(Child):
     
    # Constructor
    def __init__(self, name, age, address):
        Child.__init__(self, name, age)
        self.address = address
 
    # To get address
    def getAddress(self):
        return self.address       
 
# Driver code
g = GrandChild("Rahul", 23, "Noida") 
print(g.getName(), g.getAge(), g.getAddress())