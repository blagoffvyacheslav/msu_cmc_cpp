#include <iostream>
#include "Body.hpp"
#include "Box.hpp"
#include "Box.cpp"
#include "WBox.hpp"
#include "WBox.cpp"
#include "HBox.hpp"
#include "HBox.cpp"

int main(){
	Box korobka(3,3,3);
	HBox b1(1,1,1,1), b2(korobka, 1);
	std :: cout << "b1.height = " << b1.get_height() << std :: endl;
	std :: cout << "b1.lidHeight = " << b1.get_lidHeight() << std :: endl;
	std :: cout << "b1.area() = " << b1.area() << std :: endl;
	std :: cout << "b2.height = " << b2.get_height() << std :: endl;
	std :: cout << "b2.lidHeight = " << b2.get_lidHeight() << std :: endl;
	std :: cout << "b2.area() = " << b2.area() << std :: endl;
	return 0;
}


