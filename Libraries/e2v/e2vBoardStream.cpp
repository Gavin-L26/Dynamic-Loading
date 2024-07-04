#include "e2vBoardStream.h"

#if defined(__linux__)
extern "C"
{
	e2vBoardStream *allocator()
	{
		return new e2vBoardStream();
	}

	void deleter(e2vBoardStream *ptr)
	{
		delete ptr;
	}
}
#endif

#ifdef WIN32
extern "C"
{
	__declspec (dllexport) e2vBoardStream *allocator()
	{
		return new e2vBoardStream();
	}

	__declspec (dllexport) void deleter(e2vBoardStream *ptr)
	{
		delete ptr;
	}
}
#endif

void e2vBoardStream::test()
{
	std::cout << "Testing E2V Board Stream!" << std::endl;
}