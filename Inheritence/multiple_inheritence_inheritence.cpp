/*
	AMBIGUITY IN MULTIPLE INHERITENCE
	In multiple inheritence, if base classes contain, same member function name and derived class we try to
	access the member function, the compiler get confused.
	
	The compiler will not be able to track, whether to call member function from first base class or second base
	class and so on
	
	
	A                                   B
	void show()                         void show()  
	{                                   {
	}                                   }
	
	              C
	              
*/
