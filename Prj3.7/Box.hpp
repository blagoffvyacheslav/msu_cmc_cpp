class Box : public Body {
	private:
		int length, width, height;
	public:
		
		Box();
		Box(const Box &);
		Box(int);
		Box(int, int);
		Box(int, int, int);
		~Box();
		
		void set_length(int);
		void set_width(int);
		void set_height(int);		
		
		int get_length();
		int get_width();
		int get_height();

		int area() const;

		Box & operator=(const Box &);
		Box & operator++();
		Box operator++(int);
		Box & operator--();
		Box operator--(int);

		friend Box operator+(const Box &, const Box &);
	};
