#include <iostream>
#include "Box.cpp"

int main(){
	Box b1(1, 1, 1), bAssign, bPrefix(2,2,2), bPostfix(2,2,2), bSumma;
	bAssign = b1;
	std :: cout << "bAssign(l, w, h) =" << "(" << bAssign.get_length() << ", " << bAssign.get_width() << ", " << bAssign.get_height() << ")\n";
	++bPrefix;
	std :: cout << "bPrefix(l, w, h) =" << "(" << bPrefix.get_length() << ", " << bPrefix.get_width() << ", " << bPrefix.get_height() << ")\n";
	--bPrefix;
	std :: cout << "bPrefix(l, w, h) =" << "(" << bPrefix.get_length() << ", " << bPrefix.get_width() << ", " << bPrefix.get_height() << ")\n";
	bPostfix++;
	std :: cout << "bPostfix(l, w, h) =" << "(" << bPostfix.get_length() << ", " << bPostfix.get_width() << ", " << bPostfix.get_height() << ")\n";
	bPostfix--;
	std :: cout << "bPostfix(l, w, h) =" << "(" << bPostfix.get_length() << ", " << bPostfix.get_width() << ", " << bPostfix.get_height() << ")\n";
	bAssign = ++bPrefix;
	std :: cout << "bAssign(l, w, h) =" << "(" << bAssign.get_length() << ", " << bAssign.get_width() << ", " << bAssign.get_height() << ")\n";
	bAssign = bPostfix++;
	std :: cout << "bAssign(l, w, h) =" << "(" << bAssign.get_length() << ", " << bAssign.get_width() << ", " << bAssign.get_height() << ")\n";
	bSumma = bPrefix + bPostfix;
	std :: cout << "bSumma(l, w, h) =" << "(" << bSumma.get_length() << ", " << bSumma.get_width() << ", " << bSumma.get_height() << ")\n";
	return 0;
}