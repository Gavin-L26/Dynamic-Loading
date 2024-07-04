#pragma once

#include <iostream>
#include "BoardImageStream.h"

class e2vBoardStream : public BoardImageStream
{
public:
	e2vBoardStream() = default;
	~e2vBoardStream() = default;

	void test() override;
};
