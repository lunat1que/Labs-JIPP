cmake_minimum_required( VERSION 3.0 )

project( Matrix )

include_directories( ./include )

add_executable( main ./src/main.cpp  ./src/matrix.cpp )
