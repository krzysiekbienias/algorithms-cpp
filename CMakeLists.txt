cmake_minimum_required(VERSION 3.28)
project(algorithms-cpp)

set(CMAKE_OSX_DEPLOYMENT_TARGET "15.3")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

# Recursively collect source and header files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE HEADER_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

# Exclude build directories (Xcode and CLion)
list(FILTER SRC_FILES EXCLUDE REGEX ".*/xcode-build/.*")
list(FILTER SRC_FILES EXCLUDE REGEX ".*/cmake-build-debug/.*")
list(FILTER SRC_FILES EXCLUDE REGEX ".*/CMakeFiles/.*")

list(FILTER HEADER_FILES EXCLUDE REGEX ".*/xcode-build/.*")
list(FILTER HEADER_FILES EXCLUDE REGEX ".*/cmake-build-debug/.*")
list(FILTER HEADER_FILES EXCLUDE REGEX ".*/CMakeFiles/.*")

# Optional: mirror folder structure in Xcode
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SRC_FILES} ${HEADER_FILES})

# Build executable
add_executable(algorithms-cpp ${SRC_FILES} ${HEADER_FILES})
