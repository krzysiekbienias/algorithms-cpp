cmake_minimum_required(VERSION 3.28)
project(algorithms-cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithms-cpp
        main.cpp
        arrays/challanges.cpp
        arrays/challanges.hpp
        utils/vector.cpp
        utils/vector.hpp
        linked_list/node.hpp
        linked_list/node.cpp
        linked_list/linked_list.hpp
        linked_list/linked_list.cpp
        recursion/challenges.hpp
        recursion/challenges.cpp
        dynamic_programming/challenges.cpp
        dynamic_programming/challenges.hpp
        str/challenges.cpp
        str/challenges.hpp
        utils/template_utils.hpp
        cpp_combinations/exercises.hpp
        cpp_combinations/exersises.cpp
)
