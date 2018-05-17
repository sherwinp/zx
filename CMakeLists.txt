cmake_minimum_required( VERSION 3.0 )
project( ZX C CXX )

enable_language(CXX)
set (CMAKE_CXX_STANDARD 11)

find_package(OpenGL REQUIRED)
find_package(glfw3)

include_directories( /usr/local/include/epoxy )
include_directories( shell )

set( EPOXY_LIBRARIES
    libepoxy.so
)

link_directories( /usr/local/lib64 )

set( SOURCES 
    shell/src/shell.cpp
)

set( HEADER_FILES
    shell/src/shell.hpp
)

add_executable( ZX ${SOURCES} ${HEADER_FILES} )

target_link_libraries( ZX  GL ${EPOXY_LIBRARIES} glfw X11 pthread dl stdc++)

