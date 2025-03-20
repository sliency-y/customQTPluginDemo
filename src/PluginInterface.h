#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QObject>

// 定义插件接口
class PluginInterface {
public:
    virtual ~PluginInterface() = default;
    virtual QString pluginName() const = 0;
};

#define PluginInterface_iid "com.example.PluginInterface"
Q_DECLARE_INTERFACE(PluginInterface, PluginInterface_iid)

#endif // PLUGININTERFACE_H