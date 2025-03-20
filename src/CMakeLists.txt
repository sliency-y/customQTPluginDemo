# 定义可执行程序
add_executable(MyQtPluginProject
    main.cpp
    MyPlugin.cpp PluginInterface.h MyPlugin.h)

# 链接 Qt 库
target_link_libraries(MyQtPluginProject Qt6::Core Qt6::Gui Qt6::Widgets)
message("Test Dir: ${CMAKE_BINARY_DIR}")
# 插件路径
target_compile_definitions(MyQtPluginProject PRIVATE PLUGIN_PATH="${CMAKE_BINARY_DIR}/plugins")
