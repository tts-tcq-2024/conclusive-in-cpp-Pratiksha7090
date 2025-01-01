#include "IAlertHandler.h"
#include <stdio.h>
#include <stdlib.h>

void emailSendMessage(IAlertHandler* self, const char* message) {
    const char* recipient = "a.b@c.com";
    printf("To: %s\n", recipient);
    printf("%s\n", message);
}

IAlertHandler* createEmailAlertHandler() {
    IAlertHandler* handler = malloc(sizeof(IAlertHandler));
    handler->sendAlert = NULL;
    handler->sendMessage = emailSendMessage;
    return handler;
}
