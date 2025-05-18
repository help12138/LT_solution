cmake_minimum_required(VERSION 4.0)
project(LeetCode)

add_executable(${PROJECT_NAME} main.cpp)

# 添加子目录
add_subdirectory(string)
add_subdirectory(list)

# 链接子目录中的库（如果子目录中有自己的CMakeLists.txt）
target_link_libraries(${PROJECT_NAME} PRIVATE
    string_lib
    list_lib
)