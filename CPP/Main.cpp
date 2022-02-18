#include <iostream>
#include <string>

using namespace std;

// call the class files
#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

int main()
{

	cout << "Masukkan banyaknya data	: ";
	int n;
	cin >> n;

	Memory arr[n];

	int price = 0;
	string idProduct = "";
	string brand = "";
	string model = "";
	int frequency = 0;
	int memorySize = 0;
	string supportsCuda = "";

	int i = 0; //iterator
	for (i = 0; i < n; i++)
	{
			cout << "=========================" << endl;
			cout << "Data barang ke ->" << (i+1) << endl;

			//input tiap data produk
			cout << "Masukkan ID Produk: ";
			cin >> idProduct;
			arr[i].setIDProduct(idProduct);

			cout << "Masukkan Brand: ";
			cin >> brand;
			arr[i].setBrand(brand);

			cout << "Masukan Model: ";
			cin >> model;
			arr[i].setModel(model);

			cout << "Masukkan Harga: ";
			cin >> price;
			arr[i].setPrice(price);

			cout << "Masukkan Frequency: ";
			cin >> frequency;
			arr[i].setFrequency(frequency);

			cout << "Masukkan Memory Size: ";
			cin >> memorySize;
			arr[i].setMemorySize(memorySize);

			cout << "Apakah Supports Cuda: ";
			cin >> supportsCuda;
			arr[i].setSupportsCuda(supportsCuda);
	}
	
	cout << "====================";
	for(i = 0; i < n; i++)
	{
		cout << "\nData Barang ke -> " << (i+1) << endl;
		cout << "ID Product    : " << arr[i].getIDProduct() << endl;
		cout << "Brand         : " << arr[i].getBrand() << endl;
		cout << "Model         : " << arr[i].getModel() << endl;
		cout << "Harga         : " << arr[i].getPrice() << endl;
		cout << "Frequency     : " << arr[i].getFrequency() << " MHz" << endl;
		cout << "Memory Size   : " << arr[i].getMemorySize() << " MB" << endl;
		cout << "Supports Cuda : " << arr[i].getSupportsCuda() << endl;
	}
	
	return 0;
}