# 自动收集当前目录所有.cpp文件
file(GLOB SOURCE_FILES "*.cpp")

# 创建库
add_library(list_lib STATIC ${SOURCE_FILES})

# 设置包含路径
target_include_directories(list_lib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)