#include "SWGDefaultApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGDefaultApi::SWGDefaultApi() {}

SWGDefaultApi::~SWGDefaultApi() {}

SWGDefaultApi::SWGDefaultApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGDefaultApi::callsGet(double rptType, double rptId, SWGNumber* start, SWGNumber* limit, QString* sortBy, QString* sortType, QString* fromDate, QString* toDate, SWGNumber* duration, QString* phone, QString* phone1, QString* co, QString* ext, SWGNumber* pbxId, SWGNumber* callSource, SWGNumber* callType, SWGNumber* direction, QString* callerName, QString* did, QString* dnis, QString* acc, SWGNumber* ring, SWGNumber* cost, SWGNumber* group) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/Calls");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("rptType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(rptType)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("rptId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(rptId)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("start"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(start)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sortBy"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sortBy)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sortType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sortType)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("fromDate"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(fromDate)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("toDate"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(toDate)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("duration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(duration)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("phone"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(phone)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("phone1"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(phone1)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("co"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(co)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("ext"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(ext)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("pbxId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(pbxId)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("callSource"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(callSource)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("callType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(callType)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("direction"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(direction)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("callerName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(callerName)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("did"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(did)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("dnis"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(dnis)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("acc"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(acc)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("ring"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(ring)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cost"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cost)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("group"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(group)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDefaultApi::callsGetCallback);

    worker->execute(&input);
}

void
SWGDefaultApi::callsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGInline_response_200*>* output = new QList<SWGInline_response_200*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGInline_response_200* o = new SWGInline_response_200();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit callsGetSignal(output);
    
}
void
SWGDefaultApi::featuresChartsGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/Features/charts");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDefaultApi::featuresChartsGetCallback);

    worker->execute(&input);
}

void
SWGDefaultApi::featuresChartsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGInline_response_200*>* output = new QList<SWGInline_response_200*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGInline_response_200* o = new SWGInline_response_200();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit featuresChartsGetSignal(output);
    
}
void
SWGDefaultApi::featuresReportsGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/Features/reports");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDefaultApi::featuresReportsGetCallback);

    worker->execute(&input);
}

void
SWGDefaultApi::featuresReportsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGInline_response_200*>* output = new QList<SWGInline_response_200*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGInline_response_200* o = new SWGInline_response_200();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit featuresReportsGetSignal(output);
    
}
void
SWGDefaultApi::featuresWidgetGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/Features/widget");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDefaultApi::featuresWidgetGetCallback);

    worker->execute(&input);
}

void
SWGDefaultApi::featuresWidgetGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGInline_response_200*>* output = new QList<SWGInline_response_200*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGInline_response_200* o = new SWGInline_response_200();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit featuresWidgetGetSignal(output);
    
}
} /* namespace Swagger */
