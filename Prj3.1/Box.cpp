#include "Box.hpp"

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
	this->length = l;
}

void Box :: set_width(int w) {
	this->width = w;
}

void Box :: set_height(int h) {
	this->height = h;
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

