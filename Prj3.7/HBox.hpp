class HBox : public virtual Box{
	private:
		Box lid;
	public:
		HBox(const Box &, int);
		HBox(int, int, int, int);
		int area() const;
		void set_lidHeight(int);
		int get_lidHeight();
};
