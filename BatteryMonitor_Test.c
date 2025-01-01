#include "BatteryMonitor.h"
#include "ControllerAlertHandler.h"
#include "EmailAlertHandler.h"
#include "TemperatureClassifier.h"
#include <stdlib.h>

int main() {
    BreachClassifier* classifier = createTemperatureClassifier();
    IAlertHandler* controllerHandler = createControllerAlertHandler();
    IAlertHandler* emailHandler = createEmailAlertHandler();

    BatteryMonitor monitor = {classifier, controllerHandler, emailHandler};

    // Simulate alerts
    checkAndAlert(&monitor, -5, 1);  // Controller alert for low temperature
    checkAndAlert(&monitor, 50, 0);  // Email alert for high temperature
    checkAndAlert(&monitor, 25, 0);  // No alert for normal temperature

    // Cleanup
    free(classifier);
    free(controllerHandler);
    free(emailHandler);

    return 0;
}
