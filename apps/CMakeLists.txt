# app use basic calc
add_executable(app_basic app_basic.cpp)
target_include_directories(app_basic PRIVATE ../include)

target_link_libraries(app_basic PRIVATE calc_library)

find_package(spdlog CONFIG REQUIRED)
target_link_libraries(app_basic PRIVATE spdlog::spdlog)

# app use advanced calc
add_executable(app_adv app_adv.cpp)
target_include_directories(app_adv PRIVATE ../include)

target_link_libraries(app_adv PRIVATE calc_library)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(app_adv PRIVATE fmt::fmt)