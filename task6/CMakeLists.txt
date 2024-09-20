cmake_minimum_required(VERSION 3.28)
project(task6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find Boost
find_package(Boost REQUIRED COMPONENTS system)

# Add executable
add_executable(main1 main1.cpp)
add_executable(main2 main2.cpp)

# Include Boost headers
include_directories(${Boost_INCLUDE_DIRS})

# Link Boost libraries, Windows Sockets library, and the MSWSOCK library
target_link_libraries(main2 PRIVATE ${Boost_LIBRARIES} ws2_32 mswsock)
