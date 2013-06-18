#ifndef UPLOADENGINE_H
#define UPLOADENGINE_H

/*
 * automatically generated with the command line :
 * m-servicefwgen -p UploadEngine
 */

#include <QObject>

#include <mservicefwbaseif.h>

class UploadEngine : public MServiceFwBaseIf
{
Q_OBJECT

public:
    bool newUpload( const QString &path );

public:
    /*!
     * @brief Constructs a base interface
     * @param preferredService the preferred service provider. Leave
     * empty if no preferred provider. In most cases, this should be left
     * empty.
     * @param parent Parent object
     */

    UploadEngine( const QString& preferredService = "", QObject* parent = 0 );

    /*!
     * @brief Set the service name
     * @param service Name of the desired service
     */

    void setService(const QString & service);
Q_SIGNALS:

};
#endif

