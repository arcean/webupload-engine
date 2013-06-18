/*
 * automatically generated with the command line :
 * m-servicefwgen -p UploadEngine
 */

#include "uploadengine.h"
#include "uploadengineproxy.h"

bool UploadEngine::newUpload( const QString &path )
{
    return qobject_cast<UploadEngineProxy*>(interfaceProxy())->newUpload( path ).value();
}

UploadEngine::UploadEngine( const QString& preferredService, QObject* parent )
    : MServiceFwBaseIf( UploadEngineProxy::staticInterfaceName(), parent )
{
    // Resolve the provider service name
    QString service = resolveServiceName( interfaceName(), preferredService );

    bool serviceNameInvalid = service.contains( " " ); // "not provided" - when the service wouldn't run
    if ( serviceNameInvalid ) {
        service.clear();
    }
    setServiceName( service );

    if (!service.isEmpty()) {
        // Construct the D-Bus proxy
        setInterfaceProxy( new UploadEngineProxy( service, "/", QDBusConnection::sessionBus(), this ));
        // allConnectSignals go here (empty block if none)

    }
}

void UploadEngine::setService(const QString & service)
{
    if (service.isEmpty()) return;

    setServiceName( service );
    setInterfaceProxy( new UploadEngineProxy( service, "/", QDBusConnection::sessionBus(), this ));
    {

    }
}

