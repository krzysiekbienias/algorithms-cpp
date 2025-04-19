cmake_minimum_required(VERSION 3.28)
project(algorithms-cpp)

set(CMAKE_OSX_DEPLOYMENT_TARGET "15.3")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

# --------------------------------------------------
# 📦 Collect implementation files (excluding main.cpp)
# --------------------------------------------------

set(APP_MAIN ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/algorithms-lib/*.cpp
)

file(GLOB_RECURSE HEADER_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/algorithms-lib/*.hpp
)

list(REMOVE_ITEM SRC_FILES ${APP_MAIN})

# --------------------------------------------------
# 🧪 Collect test files
# --------------------------------------------------

file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp
)

# --------------------------------------------------
# 🧭 Source grouping for Xcode
# --------------------------------------------------

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/algorithms-lib FILES ${SRC_FILES} ${HEADER_FILES})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/tests FILES ${TEST_SOURCES})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${APP_MAIN})

# --------------------------------------------------
# 🔧 Build reusable library
# --------------------------------------------------

add_library(algorithms-lib ${SRC_FILES} ${HEADER_FILES})
target_include_directories(algorithms-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/algorithms-lib)

# --------------------------------------------------
# 🚀 Build main application
# --------------------------------------------------

add_executable(algorithms-cpp ${APP_MAIN})
target_link_libraries(algorithms-cpp algorithms-lib)

# --------------------------------------------------
# ✅ Google Test Setup
# --------------------------------------------------

enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

if(TEST_SOURCES)
  add_executable(tests ${TEST_SOURCES})
  target_link_libraries(tests gtest_main algorithms-lib)
  set_target_properties(tests PROPERTIES MACOSX_BUNDLE NO)
else()
  message(WARNING "⚠️ No test sources found — tests target will not be built.")
endif()