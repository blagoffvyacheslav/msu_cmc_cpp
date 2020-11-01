int WBox :: maxWindowWidth() {
	int mww;
	switch (sideWithWindow) {
		case 1:
		case 3:
			mww = this->get_length();
			break;
		case 2:
		case 4:
			mww = this->get_width();
			break;
		}
	return mww;
}

int WBox :: get_maxWindowWidth(){ return maxWindowWidth();}

WBox :: WBox(const Box &sourceBox, int ww, int wh, int sww) : Box :: Box(sourceBox) {
	this->sideWithWindow = sww;
	this->windowWidth = ww;
	this->windowHeight = wh;
}

WBox :: WBox(int l, int w, int h, int ww, int wh) : Box :: Box(l, w, h) {
	this->windowWidth = ww;
	this->windowHeight = wh;
}

WBox :: WBox(int l, int w, int h, int ww, int wh, int sww) : Box :: Box(l, w, h) {
	this->sideWithWindow = sww;	
	this->windowWidth = ww;
	this->windowHeight = wh;
}

void WBox :: set_windowWidth(int ww) {
	try{
		if (ww < 0 || ww > maxWindowWidth()) throw MyException("bad window width");
		this->windowWidth = ww;
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std:: endl;
	}
}

void WBox :: set_windowHeight(int wh) {
	try{
		if (wh < 0 || wh > this->get_height()) throw MyException("bad window heigth");
		this->windowHeight = wh;
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std:: endl;
	}
}

void WBox :: set_sideWithWindow(int sww) {
	try{
		if (sww < 1 || sww > 4) throw MyException("bad window side");	
		this->sideWithWindow = sww;
	}
	catch(MyException er){
	std :: cout << er.get_errorMessage() << std:: endl;
	}
}

int WBox :: get_windowWidth() {return windowWidth;}

int WBox :: get_windowHeight() {return windowHeight;}

int WBox :: get_sideWithWindow() {return sideWithWindow;}

int WBox :: area() const {
	int windowArea;
	windowArea = windowWidth * windowHeight;
	return Box :: area() - windowArea;
}
