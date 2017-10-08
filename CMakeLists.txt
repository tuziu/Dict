project(Dict)

set( toy_inc        
		src/words.h
    )

set( toy_src
        src/words.cpp
    )

#include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
#add_subdirectory (MathFunctions) 
set ( CMAKE_CXX_FLAGS "-O2 -mtune=native -Wall" )
#set ( CMAKE_CXX_FLAGS "-g -Wall" )
 
# add the executable
add_executable (Tutorial ${toy_src} ${toy_inc})
#target_link_libraries (Tutorial MathFunctions)