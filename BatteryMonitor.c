#include "BatteryMonitor.h"
#include <stdio.h>

static const char* breachMessages[] = {
    "Hi, the temperature is too low",
    "Hi, the temperature is too high",
    NULL
};

void checkAndAlert(BatteryMonitor* monitor, double temperature, int isController) {
    BreachType breachType = monitor->classifier->classify(monitor->classifier, temperature);

    if (isController) {
        monitor->controllerHandler->sendAlert(monitor->controllerHandler, breachType);
    } else {
        if (breachType == TOO_LOW || breachType == TOO_HIGH) {
            monitor->emailHandler->sendMessage(monitor->emailHandler, breachMessages[breachType]);
        }
    }
}
