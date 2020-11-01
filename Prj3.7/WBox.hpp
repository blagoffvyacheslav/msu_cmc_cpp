class WBox : public virtual Box {
	private: 
		int windowWidth, windowHeight, sideWithWindow = 1;
		int maxWindowWidth();
	public:
		WBox(const Box &, int, int, int);
		WBox(int, int, int, int, int);
		WBox(int, int, int, int, int, int);

		void set_windowWidth(int);
		void set_windowHeight(int);
		void set_sideWithWindow(int);

		int get_windowWidth();
		int get_windowHeight();
		int get_sideWithWindow();

		int get_maxWindowWidth();

		int area() const;

};
