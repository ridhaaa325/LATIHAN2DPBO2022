class Product
{
	// private attributes
	private:
		int price;
		string idProduct;

	// public attributes
	public:
		// constructor with parameter
		Product(int price, string idProduct)
		{
			this->price = price;
			this->idProduct = idProduct;
		}
		// constructor
		Product()
		{
			this->price = 0;
			this->idProduct = "";
		}

		// method for price attribute
		void setPrice(int price)
		{
			this->price = price;
		}
		int getPrice(){
			return this->price;
		}

		// method for idProduct attribute
		void setIDProduct(string idProduct)
		{
			this->idProduct = idProduct;
		}
		string getIDProduct()
		{
			return this->idProduct;
		}

		// destructor
		~Product()
		{

		}
};