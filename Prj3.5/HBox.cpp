HBox :: HBox(const Box &sourceBox, int lh) : Box :: Box(sourceBox), lid(sourceBox) {
	this->lid.set_height(lh);
}

HBox :: HBox(int l, int w, int h, int lh) : Box :: Box(l, w, h), lid(l, w, lh) {
}

int HBox :: area() const {
	return Box :: area() + lid.area();
}

void HBox :: set_lidHeight(int lh){
	this->lid.set_height(lh);
}

int HBox :: get_lidHeight(){
	return this->lid.get_height();
}

