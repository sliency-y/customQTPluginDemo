# 创建插件库
add_library(CustomPlugin SHARED
    CustomPlugin.cpp
    CustomPlugin.h
)

# 链接 Qt 库
target_link_libraries(CustomPlugin Qt6::Core Qt6::Gui Qt6::Widgets)

# 插件安装路径
install(TARGETS CustomPlugin DESTINATION plugins)
