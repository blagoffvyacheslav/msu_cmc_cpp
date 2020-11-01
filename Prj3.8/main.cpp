#include <iostream>
#include "MyStack.cpp"

int main()
{
	MyStack <int, 3> msInt;
	MyStack <double, 2> msDbl;
	msInt.pushElement(5);
	msInt.pushElement(6);
	msInt.pushElement(7);
	msInt.pushElement(8);
	std :: cout << "msInt.pop = " << msInt.popElement() << std :: endl;
	msDbl.popElement();
	msDbl.pushElement(5.5);
	msDbl.pushElement(6.6);
	msDbl.pushElement(7.7);
	std :: cout << "msDbl.pop = " << msDbl.popElement() << std :: endl;
	return 0;
}
