//####################################################
//#Saturday, 17.Januar.2015 made by Lars C. Schwensen#
//####################################################

//#################################################################
//#Just an example class                                          #
//#DEVICE: BeagleBone Black                                       #
//#OS: Debian                                                     #
//#################################################################

//MyClass.cpp

#include "MyClass.h"
#include <iostream>

MyClass::MyClass() {
	// TODO Auto-generated constructor stub

}

MyClass::~MyClass() {
	// TODO Auto-generated destructor stub
}

void MyClass::bark()
{
	std::cout << "WUFF!" << std::endl;
}
