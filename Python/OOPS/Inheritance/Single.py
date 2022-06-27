class Person(object):
    def __init__(self , name , idnumber):
        self.name = name
        self.idnumber = idnumber

    def display(self):
        print(self.name)
        print(self.idnumber)

    def details(self):
        print(f"My name is {self.name}")
        print(f"IdNumber : {self.idnumber}")

class Employee(Person):
    def __init__(self , name , idnumber , salary , post):
        super().__init__(name , idnumber)
        self.salary = salary 
        self.post = post
    
    def details(self):
        print(f"My name is {self.name}")
        print(f"IdNumber : {self.idnumber}")
        print(f"Salary : {self.salary}")
        print(f"Post : {self.post}")

employee = Employee('rahul' , 10 , 10000 , "Product Manager")
employee.display()

employee.details()