from Product import Product

class Hardware(Product):
    
    # constructor
    def __init__(self):
        self.brand = "blank"
        self.model = "blank"
        
    # methods for brand attributes
    def setBrand(self, brand):
        self.brand = brand
        
    def getBrand(self):
        return self.brand 

    # methods for model attributes
    def setModel(self, model):
        self.model = model
        
    def getModel(self):
        return self.model 
