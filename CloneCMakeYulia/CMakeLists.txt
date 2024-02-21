cmake_minimum_required(VERSION 3.15)      

set(PROJECT_NAME Yulia)				 		 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDART 17)			 


include_directories("inc/")

add_executable("${PROJECT_NAME}" Laba_2.cpp)
