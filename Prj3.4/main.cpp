#include <iostream>
#include "Body.hpp"
#include "Box.hpp"
#include "Box.cpp"
#include "WBox.hpp"
#include "WBox.cpp"

int main(){
	Box b(3,3,3);
	WBox bSoknom1(2,2,2,1,1), bSoknom2(b, 1, 1, 4);
	std :: cout << "bSoknom1.length = " << bSoknom1.get_length() << std :: endl;
	std :: cout << "bSoknom1.windowWidth = " << bSoknom1.get_windowWidth() << std :: endl;
	std :: cout << "bSoknom1.area() = " << bSoknom1.area() << std :: endl;
	std :: cout << "bSoknom1.sideWithWindow = " << bSoknom1.get_sideWithWindow() << std :: endl;
	std :: cout << "bSoknom2.windowHeigth = " << bSoknom1.get_windowHeight() << std :: endl;
	return 0;
}