/*
 * SWGInline_response_200.h
 * 
 * 
 */

#ifndef SWGInline_response_200_H_
#define SWGInline_response_200_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200: public SWGObject {
public:
    SWGInline_response_200();
    SWGInline_response_200(QString* json);
    virtual ~SWGInline_response_200();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
bool getSingle();
    void setSingle(bool single);

private:
    QString* name;
bool single;
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_H_ */
