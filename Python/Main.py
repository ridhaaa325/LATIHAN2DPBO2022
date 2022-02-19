from Memory import Memory

print("Masukkan banyaknya data: ", end = ' ')
n = int(input())

arr = [Memory() for i in range(n)]

for i in range(n):

    print("========================")
    
    print("ID Product       : ", end = ' ') 
    idProduct = str(input())
    arr[i].setIDProduct(idProduct)
    
    print("Product Price    : ", end = ' ') 
    price = int(input())
    arr[i].setPrice(price)
    
    print("Product Brand    : ", end = ' ') 
    brand = str(input())
    arr[i].setBrand(brand)
    
    print("Product Model    : ", end = ' ') 
    model = str(input())
    arr[i].setModel(model)
    
    print("Frequency Size   : ", end = ' ') 
    frequency = int(input())
    arr[i].setFrequency(frequency)
        
    print("Memory Size      : ", end = ' ') 
    memorySize = str(input())
    arr[i].setMemorySize(memorySize)

    print("Supports Cuda    : ", end = ' ') 
    supportsCuda = str(input())
    arr[i].setSupportsCuda(supportsCuda)

for i in range(n):
    print("\n========================")
    print("Data barang ke -> " + str(i+1))
    print("========================")
    print("ID Product    : " + str(arr[i].getIDProduct()))
    print("Price         : " + str(arr[i].getPrice()))
    print("Brand         : " + str(arr[i].getBrand()))
    print("Model         : " + str(arr[i].getModel()))
    print("Frequency     : " + str(arr[i].getFrequency()))
    print("Memory Size   : " + str(arr[i].getMemorySize()))
    print("Supports Cuda : " + str(arr[i].getSupportsCuda()))