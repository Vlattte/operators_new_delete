#pragma once
class something
{
public:
	something();
	int makerSometing(int one, int two);
	void* operator new(size_t size);			//operator new for single objects
	void* operator new[](size_t size);			//operator new for arrays

	void operator delete(void* thing);			//operator delete for single objects
	void operator delete[](void* thing);		//operator delete for arrays
	~something();

private:
	int integer1;
	int integer2;
};

