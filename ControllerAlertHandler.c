#include "IAlertHandler.h"
#include <stdio.h>

void controllerSendAlert(IAlertHandler* self, BreachType breachType) {
    unsigned short header = 0xfeed;
    printf("%x : %d\n", header, breachType);
}

IAlertHandler* createControllerAlertHandler() {
    IAlertHandler* handler = malloc(sizeof(IAlertHandler));
    handler->sendAlert = controllerSendAlert;
    handler->sendMessage = NULL;
    return handler;
}
