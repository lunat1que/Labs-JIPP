cmake_minimum_required( VERSION 3.0 )

project( HR )

include_directories( ./include)

add_executable( main ./src/main.cpp ./src/employee.cpp ./src/HRMS.cpp )
