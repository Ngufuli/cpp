/*
	EXCEPTION HANDLING IN C++
	An exception is a run-time error which occurs while running a program and makes the program terminate
	without giving any warning message
	
	The execution of the program stops working normally when an exception occurs
	
	Exception handling is a mechanism which helps a user to handle such situation
	
	There are three keywords used in exception handling mechanism
	1)try
	2)catch
	3)throw
	
	_tryblock: 		contains a code which the user thinks can generate an exception
	SYNTAX
	try
	{
		//code that can generate exception;
		throw var_name / constant;
	}
	
	_catchblock:	contains the action to be taken when an exception occurs and it must follow the _tryblock
	SYNTAX
	catch(data_type msg) //message can be any variable
	{
		//action taken;
	}
	
	throw Keyword:		Used to throw an exception when it occurs within a program
	SYNTAX
	{
		//
	}

*/
