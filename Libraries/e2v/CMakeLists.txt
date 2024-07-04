cmake_minimum_required(VERSION 3.9)
project(e2v
        VERSION 0.0.1
        DESCRIPTION "E2V Board Example")

set(CMAKE_CXX_STANDARD 17)


include_directories(
	../../API/
)

add_library(e2v SHARED
	../../API/BoardImageStream.h
	e2vBoardStream.h
	e2vBoardStream.cpp
)
