#include "somethingWithNewAndDelete.h"
#include <cstdlib>
#include <exception>


something::something()
	:integer1(0), integer2(0)
{
	//nothing here
}

int something::makerSometing(int one, int two)
{
	integer1 = one;
	integer2 = two;

	return integer1 + integer2;
}

void* something::operator new(size_t size)
{
	void* pointer = malloc(size);

	if (!pointer)
	{
		throw "can't allocate memory for single object";
	}
	else
	{
		return pointer;
	}
}

void* something::operator new[](size_t size)
{
	void* pointer = malloc(size);

	if (!pointer)
	{
		throw "can't allocate memory for array";
	}
	else
	{
		return pointer;
	}
}


void something::operator delete(void* thing)
{
	if (thing != nullptr)
	{
		free(thing); //memory was freed
	}
}

void something::operator delete[](void* thing)
{
	delete(thing); //memory was freed
}

something::~something()
{
	integer1 = 0;
	integer2 = 0;
}
