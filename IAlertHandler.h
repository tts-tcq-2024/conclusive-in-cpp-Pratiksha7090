#ifndef I_ALERT_HANDLER_H
#define I_ALERT_HANDLER_H

#include "BreachClassifier.h"

typedef struct IAlertHandler {
    void (*sendAlert)(struct IAlertHandler* self, BreachType breachType);
    void (*sendMessage)(struct IAlertHandler* self, const char* message);
} IAlertHandler;

#endif // I_ALERT_HANDLER_H
