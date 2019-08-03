/*constructors in C++
	in C++ a constructor is a special members function of a class which is called
	automatically when an object of the class is created.
	
	following are the features of the constructor.
	
	1)A constructor is having the same as that of class, 
	2)A constructor must be declared in public section of a class
	3)A constructor do not have any data_type, not even void(when we ) 
	4)A constructor can not be constant and static.
	5)A constructor is automatically called when an object is created, hence there is
	  no need to call it.
	6)A constructor is normally used to initialise the data members of a class
	
	There are three types of constructors in C++
	1)DEFAULT CONSTRUCTORS
	2)PARAMETARIZED CONSTRUCTORS
	3)COPY CONSTRUCTOR
	
	->A constructor is said to be a default constructor if it does not take any parameter
	->It is normally used to give the default values to the data members
	-if a constructor takes a parameter and arguments: it is said to be parametarized.
	
	A constructor is said to be parametarized if it takes some parameters to initilize 
	the data members of a class
	
	Parametarized constructor is normally used when we want to initalize data members
	with user defined data values
	
	
	COPY CONSTRUCTOR
	A copy constructor is a constructor which is called automatically when we try to copy
	an object to another object, a copy constructor takes an argument which is referenced 
	to the object of the same class
*/
