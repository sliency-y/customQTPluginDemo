#pragma once
#ifndef CUSTOMPLUGIN_H
#define CUSTOMPLUGIN_H

#include "../src/PluginInterface.h"
#include <QObject>

class CustomPlugin : public QObject, public PluginInterface {
        Q_OBJECT
        Q_PLUGIN_METADATA(IID PluginInterface_iid)
        Q_INTERFACES(PluginInterface)

public:
    QString pluginName() const override { return "CustomPlugin"; }
};

#endif // CUSTOMPLUGIN_H
