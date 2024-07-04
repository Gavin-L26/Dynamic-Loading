#include <iostream>
#include <string>
#include <memory>
#include "DLLoader.h"
#include "BoardImageStream.h"

using namespace std;

#ifdef WIN32
static const std::string e2vLibPath = "e2v.dll";
static const std::string shibuyaLibPath = "shibuya.dll";
#endif
#ifdef __linux__
static const std::string e2vLibPath = "./libe2v.so";
static const std::string shibuyaLibPath = "./libshibuya.so";
#endif
/*
** Using the smart pointer directly in an inner function because
** the reference to its destructor contained in the dll is lost before
** going out of the caller function's scope.
*/
void testABoard(dlloader::DLLoader<BoardImageStream>& dlloader)
{
	std::shared_ptr<BoardImageStream> board = dlloader.DLGetInstance();

	board->test();
}

void test(const std::string& path)
{
	dlloader::DLLoader<BoardImageStream> dlloader(path);

	std::cout << "Loading " << path << std::endl;
	dlloader.DLOpenLib();

	testABoard(dlloader);

	std::cout << "Unloading " << path << std::endl;
	dlloader.DLCloseLib();
}

int main()
{
	test(e2vLibPath);
	test(shibuyaLibPath);

	return 0;
}