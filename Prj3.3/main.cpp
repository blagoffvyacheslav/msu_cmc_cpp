#include <iostream>
#include "Body.hpp"
#include "Box.hpp"
#include "Box.cpp"

int main(){
	Box b1(1, 1, 1);
	std :: cout << "b1.area() = " << b1.area() << std :: endl;
	return 0;
}