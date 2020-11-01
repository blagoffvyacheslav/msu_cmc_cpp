#include <iostream>
#include "Box.cpp"

int main(){
	Box b0, b1(1), b2(1, 2), b3(1, 2, 3);
	Box bCopy(b3);
	std :: cout << "b0.area = " << b0.area() << std :: endl;
	b0.set_length(1); b0.set_width(1); b0.set_height(1);
	std :: cout << "b0 izmenena\n";
	std :: cout << "b0(l, w, h) =" << "(" << b0.get_length() << ", " << b0.get_width() << ", " << b0.get_height() << ")\n";
	std :: cout << "b1(1).area = " << b1.area() << std :: endl;
	std :: cout << "b2(1,2).area = " << b2.area() << std :: endl;
	std :: cout << "b3(1,2,3).area = " << b3.area() << std :: endl;
	std :: cout << "bCopy sozdana na osnove korobki 3\n";
	std :: cout << "bCopy.area = " << bCopy.area() << std :: endl;
	return 0;
}