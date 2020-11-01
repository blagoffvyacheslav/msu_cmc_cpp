#include "MyException.hpp"
#include "MyException.cpp"

template <typename cellType, int maxSize> class MyStack{
	private:
		cellType s[maxSize];
		int topElementIndex;
	public:
		MyStack(){ topElementIndex = 0;	}
		~MyStack() {}
		cellType popElement();
		void pushElement(cellType);
		bool is_full(){ return topElementIndex == maxSize;}
		bool is_empty(){ return topElementIndex == 0;}
};

template <typename cellType, int maxSize> cellType MyStack <cellType, maxSize> :: popElement(){
	try{
		if (is_empty()) throw MyException("stack is empty");
		topElementIndex--;
		return s[topElementIndex];
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std :: endl;
	}
}

template <typename cellType, int maxSize> void MyStack <cellType, maxSize> :: pushElement(cellType ne){
	try{
		if (is_full()) throw MyException("stack is full");
		s[topElementIndex] = ne;
		topElementIndex++;
	}
	catch(MyException er){
		std :: cout << er.get_errorMessage() << std :: endl;
	}
}
