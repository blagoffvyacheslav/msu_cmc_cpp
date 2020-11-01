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
	WHBox b(2, 2, 2, 1, 1, 4, 1);
	std :: cout << "b.length = " << b.get_length() << std :: endl;
	std :: cout << "b.windowWidth = " << b.get_windowWidth() << std :: endl;
	std :: cout << "b.lidHeight = " << b.get_lidHeight() << std :: endl;
	std :: cout << "b.area() = " << b.area() << std :: endl;
	return 0;
}


