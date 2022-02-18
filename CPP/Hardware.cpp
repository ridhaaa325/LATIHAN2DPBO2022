class Hardware : public Product
{
	// private attributes
	private:
		string brand;
		string model;

	// public attributes	
	public:
		// constructor with parameter
		Hardware(string brand, string model)
		{
			this->brand = brand;
			this->model = model;
		}
		// constructor
		Hardware(){
			this->brand = "";
			this->model = "";
		}

		// method for brand attribute
		void setBrand(string brand)
		{
			this->brand = brand;
		}
		string getBrand()
		{
			return this->brand;
		}

		// method for model attribute
		void setModel(string model)
		{
			this->model = model;
		}
		string getModel()
		{
			return this->model;
		}

		// destructor
		~Hardware()
		{

		}

};