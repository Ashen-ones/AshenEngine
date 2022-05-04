cmake_minimum_required (VERSION 3.1) 
project (AshenEngine)

add_subdirectory("Source")

include_directories("${PROJECT_SOURCE_DIR}/Source/Framework/Core/GeomMath")

add_executable(AshenEngine ${PROJECT_SOURCE_DIR}/Source/main.cpp)

target_link_libraries(AshenEngine GeomMath)