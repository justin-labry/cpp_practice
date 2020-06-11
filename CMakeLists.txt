cmake_minimum_required(VERSION 3.15)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_practice
    10_encapsulation.cpp
    11_construction_test.cpp
    12_construction_test2.cpp
    13_construction_test3.cpp
    14_delegated_constructor.cpp
    15_class_and_const.cpp
    16_static_member.cpp
    17_arith_overloading.cpp
    18_io_overloading.cpp
    19_plus_minus_overloading.cpp
    20_subscript_overloading.cpp
    21_function_parenthesis_overloading.cpp
    22_type_cast_overloading.cpp
    23_copy_constructor_overloading.cpp
    24_converting_constructor_overloading.cpp
    25_fstream.cpp
    26_deepcopy_shallowcopy.cpp
    2_function_pointer.cpp
    3_stack_heap.cpp
    4_recursive_function.cpp
    5_defensive_programming.cpp
    6_assert_test.cpp
    7_arguments_test.cpp
    8_ellipsis_test.cpp
    9_oop_test.cpp 27_smart_ptr.cpp AutoPtr.h Resource.h 28_rvalue_reference.cpp 29_move_constructor.cpp)
