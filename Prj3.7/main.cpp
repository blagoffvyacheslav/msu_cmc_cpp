#include <iostream>
#include "Body.hpp"
#include "Box.hpp"
#include "Box.cpp"
#include "WBox.hpp"
#include "WBox.cpp"
#include "HBox.hpp"
#include "HBox.cpp"
#include "WHBox.hpp"
#include "WHBox.cpp"

int main(){
	Box b(7, 5, 3);
	WBox bOkno(b, 1, 1, 4);
	b.set_width(-5);
	b.set_height(-5);
	b.set_length(-5);
	std :: cout << "b.length = " << b.get_length() << std :: endl;
	bOkno.set_sideWithWindow(0);
	std :: cout << "bOkno.sideWithWindow = " << bOkno.get_sideWithWindow() << std :: endl;
	std :: cout << "bOkno.maxWindowWidth = " << bOkno.get_maxWindowWidth() << std :: endl;
	bOkno.set_windowWidth(6);
	std :: cout << "b.windowWidth = " << bOkno.get_windowWidth() << std :: endl;
	bOkno.set_windowHeight(4);
	std :: cout << "b.windowHeight = " << bOkno.get_windowHeight() << std :: endl;
	return 0;
}


