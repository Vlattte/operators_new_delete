#include <iostream>
#include <exception>
#include "somethingWithNewAndDelete.h"


int main()
{
	something* itsPointer;
	something* itsArray;

	try
	{
		itsPointer = new something();
		itsArray = new something[0];
	}
	catch (char* exception)
	{
		std::exception bad_alloc;
		std::cout << exception << std::endl;
		std::cout << bad_alloc.what() << std::endl;
		return 0; //something went wrong
	}

	delete itsPointer;
	std::cout << "Our pointer has just been deleted" << std::endl;

	delete[] itsArray;
	std::cout << "Our array has just been deleted" << std::endl;
	
	int n;
	std::cin >> n;

	return 1; //successful ending
}
