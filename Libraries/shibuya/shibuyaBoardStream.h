#pragma once

#include <iostream>
#include "BoardImageStream.h"

class shibuyaBoardStream : public BoardImageStream
{
public:
	shibuyaBoardStream() = default;
	~shibuyaBoardStream() = default;

	void test() override;
};
