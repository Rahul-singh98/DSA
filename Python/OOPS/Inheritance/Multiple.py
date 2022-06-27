class Marvel(object):
    def __init__(self , marvelCharactersName):
        self.marvelCharacters = marvelCharactersName

    def isMarvel(self , name):
        if (name in self.marvelCharacters):
            print(f"{name} is a Marvel")
            return

        print(f"{name} is not a Marvel")

    def getMarvel(self):
        print(self.marvelCharacters)
 
class DC(object):
    def __init__(self , dcCharactersName):
        self.dcCharacters = dcCharactersName

    def isDC(self , name):
        if (name in self.dcCharacters):
            print(f"{name} is a DC")
            return 
            
        print(f"{name} is not a DC")
    
    def getDC(self):
        print(self.dcCharacters)
 
class SuperHeros(Marvel, DC):
    def __init__(self , marvelCharactersName , dcCharactersName):        
        Marvel.__init__(self , marvelCharactersName)
        DC.__init__(self , dcCharactersName)

    def getSuperHeros(self):
        print(self.marvelCharacters + self.dcCharacters)

mySuperHeros = SuperHeros(["Captain America" , "Iron Man" , "Hulk" , "Thor"] , ["Batman" , "Superman" , "Wonder Woman" , "Flash"])
mySuperHeros.getSuperHeros()
mySuperHeros.isMarvel("Rahul")
mySuperHeros.isDC("Batman")