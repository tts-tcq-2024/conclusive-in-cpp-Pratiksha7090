#ifndef BREACH_CLASSIFIER_H
#define BREACH_CLASSIFIER_H

typedef enum {
    TOO_LOW,
    TOO_HIGH,
    NORMAL
} BreachType;

typedef struct BreachClassifier {
    BreachType (*classify)(struct BreachClassifier* self, double temperature);
} BreachClassifier;

#endif // BREACH_CLASSIFIER_H
