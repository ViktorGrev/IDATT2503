cmake_minimum_required(VERSION 3.28)
project(MyGtkmmApp)

set(CMAKE_CXX_STANDARD 17)

# Set up the GTKmm package
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

# Define the executable target
add_executable(main1 main1.cpp)
add_executable(MyGtkmmApp main2.cpp)

# Link the GTKmm libraries to the executable
target_link_libraries(MyGtkmmApp ${GTKMM_LIBRARIES})
