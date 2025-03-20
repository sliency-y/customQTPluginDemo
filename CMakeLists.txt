cmake_minimum_required(VERSION 3.16)
project(MyQtPluginProject LANGUAGES CXX)

# 查找 Qt 包
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
# 添加 src 目录
add_subdirectory(src)
# 添加插件目录
add_subdirectory(plugins)
