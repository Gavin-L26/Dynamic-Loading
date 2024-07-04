#include "shibuyaBoardStream.h"

#if defined(__linux__)
extern "C"
{
	shibuyaBoardStream *allocator()
	{
		return new shibuyaBoardStream();
	}

	void deleter(shibuyaBoardStream *ptr)
	{
		delete ptr;
	}
}
#endif

#ifdef WIN32
extern "C"
{
	__declspec (dllexport) shibuyaBoardStream *allocator()
	{
		return new shibuyaBoardStream();
	}

	__declspec (dllexport) void deleter(shibuyaBoardStream *ptr)
	{
		delete ptr;
	}
}
#endif

void shibuyaBoardStream::test()
{
	std::cout << "Testing shibuya Board Stream!" << std::endl;
}