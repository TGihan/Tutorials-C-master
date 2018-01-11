/*####################################################
compiler silently writes 4 functions if they are not explicitly declared
1. Copy constructor
2. Copy Assignment Operator
3. Destructor
4. Default constructor(only if there is no constructor declared)
*/


class Dog{
public:
//1. Copy constructor
Dog(const Dog& rhs){...}; //member by member initialization
//2. Copy Assignment Operator
Dog& operator=(const Dog& rhs) {...}; //member by member copying
//3. Destructor
Dog() {...};	//1. call base class's default constructor
			 	//2. call data member's default constructor
//4. Default constructor 
~Dog() {...};	//1. call base class's destructor
				//2. call data member's destructor
};
/*
Note:
1. They are pulic and inline
2. They are generated only if they are needed
*/
