template <typename cellType, int maxSize> class MyStack{
	private:
		cellType s[maxSize];
		int topElementIndex;
	public:
		MyStack(){};
		~MyStack(){};
		cellType popElement(){};
		void pushElement(cellType ){};
		bool is_full();
		bool is_empty();
};
