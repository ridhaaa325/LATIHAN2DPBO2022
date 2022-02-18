//kelas yang digunakan untuk mengimplementasikan kelas Memory
class Memory : public Hardware
{
	// private attributes
	private:
		// private attributes
		int frequency;
		int memorySize;
		string supportsCuda;

	// public attributes
	public:
		// constructor with parameter
		Memory(int frequency, int memorySize, string supportsCuda)
		{
			this->frequency = frequency;
			this->memorySize = memorySize;
			this->supportsCuda = supportsCuda;
		}
		// constructor
		Memory()
		{
			this->frequency = 0;
			this->memorySize = 0;
			this->supportsCuda = "";
		}

		// method for frequency attribute
		void setFrequency(int frequency)
		{
			this->frequency = frequency;
		}
		int getFrequency()
		{
			return this->frequency;
		}

		// method for memory size attribute
		void setMemorySize(int memorySize)
		{
			this->memorySize = memorySize;
		}
		int getMemorySize()
		{
			return this->memorySize;
		}

		// method for supports cuda attribute
		void setSupportsCuda(string supportsCuda)
		{
			this->supportsCuda = supportsCuda;
		}
		string getSupportsCuda()
		{
			return this->supportsCuda;
		}

		// destructor
		~Memory(){

		}

};