class Product:

    # constructor
    def __init__(self):
        self.idProduct = "blank"
        self.price = 0

    # methods for id product attribute
    def setIDProduct(self, idProduct):
        self.idProduct = idProduct

    def getIDProduct(self):
        return self.idProduct 

    # methods for price attribute
    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price 
