/*
 * automatically generated with the command line :
 * m-servicefwgen -a UploadEngine
 *
 * m-servicefwgen is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef UPLOADENGINEADAPTOR_H_1364581326
#define UPLOADENGINEADAPTOR_H_1364581326

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.meego.sharing.webuploadengine
 */
class UploadEngineAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.meego.sharing.webuploadengine")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.meego.sharing.webuploadengine\">\n"
"    <!-- \n"
"      The method newUpload is used when the communicating service wants to add\n"
"      a new upload request into the queue maintained by the Upload Engine. The\n"
"      'IN' parameters are:\n"
"        path: Path to file defining the upload task\n"
"      The 'OUT' parameter is:\n"
"        received: Has value true if the message was received\n"
"     -->\n"
"    <method name=\"newUpload\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"path\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"received\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    UploadEngineAdaptor(QObject *parent);
    virtual ~UploadEngineAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool newUpload(const QString &path);
Q_SIGNALS: // SIGNALS
};

#endif
