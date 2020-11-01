class MyException{
		private:
			std :: string errorMessage;
		public:
			MyException(std :: string);
			std :: string get_errorMessage();
};