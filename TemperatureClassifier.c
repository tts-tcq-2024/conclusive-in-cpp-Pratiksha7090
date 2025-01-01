#include "BreachClassifier.h"
#include <stdlib.h>

BreachType classifyTemperature(BreachClassifier* self, double temperature) {
    if (temperature < 0) {
        return TOO_LOW;
    } else if (temperature > 45) {
        return TOO_HIGH;
    } else {
        return NORMAL;
    }
}

BreachClassifier* createTemperatureClassifier() {
    BreachClassifier* classifier = malloc(sizeof(BreachClassifier));
    classifier->classify = classifyTemperature;
    return classifier;
}
