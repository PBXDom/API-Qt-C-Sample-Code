#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGInline_response_200.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGInline_response_200").compare(type) == 0) {
      return new SWGInline_response_200();
    }
    
    return NULL;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != NULL) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return NULL;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
