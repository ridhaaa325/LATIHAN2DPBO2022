from Hardware import Hardware

class Memory(Hardware):
    
    # constructor
    def __init__(self):
        self.frequency = "blank"
        self.memorySize = 0
        self.supportsCuda = "blank"
        
    # methods for frequency attribute
    def setFrequency(self, frequency):
        self.frequency = frequency
        
    def getFrequency(self):
        return self.frequency 

    # methods for memorys size attribute
    def setMemorySize(self, memorySize):
        self.memorySize = memorySize
        
    def getMemorySize(self):
        return self.memorySize 

    # methods for supports cuda attribute
    def setSupportsCuda(self, supportsCuda):
        self.supportsCuda = supportsCuda
        
    def getSupportsCuda(self):
        return self.supportsCuda 
