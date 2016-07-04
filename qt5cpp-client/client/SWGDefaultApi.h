#ifndef _SWG_SWGDefaultApi_H_
#define _SWG_SWGDefaultApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200.h"

#include <QObject>

namespace Swagger {

class SWGDefaultApi: public QObject {
    Q_OBJECT

public:
    SWGDefaultApi();
    SWGDefaultApi(QString host, QString basePath);
    ~SWGDefaultApi();

    QString host;
    QString basePath;

    void callsGet(double rptType, double rptId, SWGNumber* start, SWGNumber* limit, QString* sortBy, QString* sortType, QString* fromDate, QString* toDate, SWGNumber* duration, QString* phone, QString* phone1, QString* co, QString* ext, SWGNumber* pbxId, SWGNumber* callSource, SWGNumber* callType, SWGNumber* direction, QString* callerName, QString* did, QString* dnis, QString* acc, SWGNumber* ring, SWGNumber* cost, SWGNumber* group);
    void featuresChartsGet();
    void featuresReportsGet();
    void featuresWidgetGet();
    
private:
    void callsGetCallback (HttpRequestWorker * worker);
    void featuresChartsGetCallback (HttpRequestWorker * worker);
    void featuresReportsGetCallback (HttpRequestWorker * worker);
    void featuresWidgetGetCallback (HttpRequestWorker * worker);
    
signals:
    void callsGetSignal(QList<SWGInline_response_200*>* summary);
    void featuresChartsGetSignal(QList<SWGInline_response_200*>* summary);
    void featuresReportsGetSignal(QList<SWGInline_response_200*>* summary);
    void featuresWidgetGetSignal(QList<SWGInline_response_200*>* summary);
    
};
}
#endif