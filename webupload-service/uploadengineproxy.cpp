/*
 * automatically generated with the command line :
 * m-servicefwgen -p UploadEngine
 *
 * m-servicefwgen is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "uploadengineproxy.h"

/*
 * Implementation of interface class UploadEngineProxy
 */

UploadEngineProxy::UploadEngineProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

UploadEngineProxy::~UploadEngineProxy()
{
}

