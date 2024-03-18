add_library(calc_library SHARED calc/basic.cpp calc/advanced.cpp)
target_include_directories(calc_library PRIVATE ../include)