#include <QCoreApplication>
#include <QPluginLoader>
#include <QDebug>
#include "PluginInterface.h"

int main(int argc, char* argv[]) {
    QCoreApplication app(argc, argv);

    // ¶¯Ì¬¼ÓÔØ²å¼þ
    QPluginLoader loader(QStringLiteral(PLUGIN_PATH "/CustomPlugin"));
    QObject* plugin = loader.instance();

    if (plugin) {
        auto interface = qobject_cast<PluginInterface*>(plugin);
        if (interface) {
            qDebug() << "Loaded Plugin:" << interface->pluginName();
        }
        else {
            qDebug() << "Failed to cast plugin interface.";
        }
    }
    else {
        qDebug() << "Failed to load plugin:" << loader.errorString();
    }

    return app.exec();
}