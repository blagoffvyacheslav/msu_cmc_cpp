WBox :: WBox(const Box &sourceBox, int ww, int wh, int sw) : Box :: Box(sourceBox) {
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
	this->windowWidth = ww;
}

void WBox :: set_windowHeight(int wh) {
	this->windowHeight = wh;
}

void WBox :: set_sideWithWindow(int sww) {
	this->sideWithWindow = sww;
}

int WBox :: get_windowWidth() {return windowWidth;}

int WBox :: get_windowHeight() {return windowHeight;}

int WBox :: get_sideWithWindow() {return sideWithWindow;}

int WBox :: area() const {
	int windowArea;
	windowArea = windowWidth * windowHeight;
	return Box :: area() - windowArea;
}
