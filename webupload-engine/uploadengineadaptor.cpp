/*
 * automatically generated with the command line :
 * m-servicefwgen -a UploadEngine
 *
 * m-servicefwgen is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "uploadengineadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class UploadEngineAdaptor
 */

UploadEngineAdaptor::UploadEngineAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

UploadEngineAdaptor::~UploadEngineAdaptor()
{
    // destructor
}

bool UploadEngineAdaptor::newUpload(const QString &path)
{
    // handle method call com.meego.sharing.webuploadengine.newUpload
    bool received;
    QMetaObject::invokeMethod(parent(), "newUpload", Q_RETURN_ARG(bool, received), Q_ARG(QString, path));
    return received;
}

