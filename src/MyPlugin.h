#ifndef MYPLUGIN_H
#define MYPLUGIN_H

#include "PluginInterface.h"
#include <QObject>

class MyPlugin : public QObject, public PluginInterface {
    Q_OBJECT
        Q_PLUGIN_METADATA(IID PluginInterface_iid)
        Q_INTERFACES(PluginInterface)

public:
    QString pluginName() const override { return "MyPlugin"; }
};

#endif // MYPLUGIN_H