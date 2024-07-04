cmake_minimum_required(VERSION 3.9)
project(shibuya
        VERSION 0.0.1
        DESCRIPTION "Shibuya Board Example")

set(CMAKE_CXX_STANDARD 17)


include_directories(
	../../API/
)

add_library(shibuya SHARED
	../../API/BoardImageStream.h
	shibuyaBoardStream.h
	shibuyaBoardStream.cpp
)
