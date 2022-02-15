import java.util.Scanner;

class Main {
    
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        int Price = 0;
        String IDProduct = "";
        String Brand = "";
        String Model = "";
        int Frequency = 0;
        int Memory = 0;
        String SupportsCuda = "";
        
        int n = 0;   
        System.out.print("Masukkan jumlah inputan: ");
        try{
            n = sc.nextInt();
        }catch(Exception e){}

        Memory arr[] = new Memory[n];

        int i = 0;
        for (i = 0; i < n; i++) 
        {
            arr[i] = new Memory();
            
            System.out.println("====================");
			System.out.println("Masukkan Data Barang --> " + (i+1));

			System.out.print("Masukkan Harga        : ");
			try{
				Price = sc.nextInt();
			}catch(Exception e){}
			arr[i].setPrice(Price);

            System.out.print("Masukkan ID Produk    : ");
			try{
				IDProduct = sc.next();
			}catch(Exception e){}
			arr[i].setIdProduct(IDProduct);
            
            System.out.print("Masukkan Brand        : ");
			try{
				Brand = sc.next();
			}catch(Exception e){}
			arr[i].setBrand(Brand);

            System.out.print("Masukkan Model        : ");
			try{
				Model = sc.next();
			}catch(Exception e){}
			arr[i].setModel(Model);

            System.out.print("Masukkan Frequency    : ");
			try{
				Frequency = sc.nextInt();
			}catch(Exception e){}
			arr[i].setFrequency(Frequency);

            System.out.print("Masukkan Memory       : ");
			try{
				Memory = sc.nextInt();
			}catch(Exception e){}
			arr[i].setMemorySize(Memory);
            
            System.out.print("Apakah Support Cuda   : ");
			try{
				SupportsCuda = sc.next();
			}catch(Exception e){}
			arr[i].setSupportsCuda(SupportsCuda);

        }
        
        System.out.println("====================");
        for (i = 0; i < n; i++) 
        {
            System.out.println("Data barang ke -> " + (i+1));
            System.out.println("ID Products     : " + arr[i].getIdProduct());
            System.out.println("Price           : " + arr[i].getPrice());
            System.out.println("Brand           : " + arr[i].getBrand());
            System.out.println("Model           : " + arr[i].getModel());
            System.out.println("Frequency       : " + arr[i].getFrequency());
            System.out.println("Memory Size     : " + arr[i].getMemorySize());
            System.out.println("Supports Cuda   : " + arr[i].getSupportsCuda());
        } 
        
        System.out.println("====================");   
    }
}
