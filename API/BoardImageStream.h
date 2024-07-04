#pragma once

/*
** This is the base class for all planets (libraries)
*/
class BoardImageStream
{
	
public:
	virtual ~BoardImageStream() = default;

	/*
	** Pure method which will be overrided.
	*/
	virtual void test() = 0;

};