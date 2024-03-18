# test basic
add_executable(test_basic calc/basic.test.cpp)
target_include_directories(test_basic PRIVATE ../include)

target_link_libraries(test_basic PRIVATE calc_library)

find_package(doctest CONFIG REQUIRED)
target_link_libraries(test_basic PRIVATE doctest::doctest)

# test advanced
add_executable(test_advanced calc/advanced.test.cpp)
target_include_directories(test_advanced PRIVATE ../include)

target_link_libraries(test_advanced PRIVATE calc_library)

find_package(doctest CONFIG REQUIRED)
target_link_libraries(test_advanced PRIVATE doctest::doctest)

add_test(NAME calc_basic_test COMMAND test_basic) # Command can be a target
add_test(NAME calc_advanced_test COMMAND test_advanced) # Command can be a target
