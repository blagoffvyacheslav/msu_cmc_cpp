WHBox :: WHBox(int l, int w, int h, int ww, int wh, int ws, int lh) :
	Box(l, w, h), 
	WBox(l, w, h, ww, wh, ws),
	HBox(l, w, h, lh) {}

int WHBox :: area() const {return - Box :: area() + WBox :: area() + HBox :: area();}
