
#include "SWGInline_response_200.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200::SWGInline_response_200(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200::SWGInline_response_200() {
    init();
}

SWGInline_response_200::~SWGInline_response_200() {
    this->cleanup();
}

void
SWGInline_response_200::init() {
    name = new QString("");
single = false;
}

void
SWGInline_response_200::cleanup() {
    if(name != NULL) {
        delete name;
    }

}

SWGInline_response_200*
SWGInline_response_200::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
setValue(&single, pJson["single"], "bool", "");
}

QString
SWGInline_response_200::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
        
obj->insert("single", QJsonValue(single));

    return obj;
}

QString*
SWGInline_response_200::getName() {
    return name;
}
void
SWGInline_response_200::setName(QString* name) {
    this->name = name;
}

bool
SWGInline_response_200::getSingle() {
    return single;
}
void
SWGInline_response_200::setSingle(bool single) {
    this->single = single;
}



} /* namespace Swagger */

