#ifndef BATTERY_MONITOR_H
#define BATTERY_MONITOR_H

#include "IAlertHandler.h"
#include "BreachClassifier.h"

typedef struct {
    BreachClassifier* classifier;
    IAlertHandler* controllerHandler;
    IAlertHandler* emailHandler;
} BatteryMonitor;

void checkAndAlert(BatteryMonitor* monitor, double temperature, int isController);

#endif // BATTERY_MONITOR_H
