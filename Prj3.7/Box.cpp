#include "MyException.hpp"
#include "MyException.cpp"
Box :: Box(int l, int w, int h) : length(l), width(w), height(h) {
	}

Box :: Box() : Box :: Box(0,0,0) {}

Box :: Box(int cubeSide) : Box :: Box(cubeSide, cubeSide, cubeSide) {}

Box :: Box(const Box &sourceBox) : Box :: Box( sourceBox.length, sourceBox.width, sourceBox.height ) {}

Box :: Box(int l, int w) : Box :: Box(l, w, 0) {}

Box :: ~Box() {
	std :: cout << "vyzvan destruktor Box :: ~Box()" << std :: endl;
}

void Box :: set_length(int l) {
	try{
		if (l < 0) throw MyException("bad length");
		this->length = l;
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std:: endl;
	}
}

void Box :: set_width(int w) {
	try{
		if (w < 0) throw MyException("bad width");
		this->width = w;
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std:: endl;
	}
}

void Box :: set_height(int h) {
	try{
		if (h < 0) throw MyException("bad height");
		this->height = h;
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std:: endl;
	}
}

int Box :: get_length() {return length;}

int Box :: get_width() {return width;}

int Box :: get_height() {return height;}

int Box :: area() const {
	int sideArea, bottomArea;
		sideArea = 2 * length * height + 2 * width * height;
		bottomArea = length * width;
		return sideArea + bottomArea;
}

Box & Box :: operator = (const Box &sourceBox) {
	this->length = sourceBox.length;
	this->width = sourceBox.width;
	this->height = sourceBox.height;
	return *this;
}

Box & Box :: operator++(){
	++length;
	++width;
	++height;
	return *this;
}

Box Box :: operator++(int ){
	Box tempBox(*this);
	++(*this);
	return tempBox;
}

Box & Box :: operator--(){
	--length;
	--width;
	--height;
	return *this;
}

Box Box :: operator--(int ){
	Box tempBox(*this);
	--(*this);
	return tempBox;
}

Box operator+(const Box &box1, const Box &box2){
	Box tempBox(box1.length + box2.length, box1.width + box2.width, box1.height + box2.height);
	return tempBox;
}
