#include <pthread.h>
#include <stdio.h>

int avg = 0;
int minValue = 0, maxValue = 0;
int len = 7;

void *calcAvg(void *arg) {
    int i = 0, sum = 0;
    int *values;
    values = (int *) arg;
    for (i = 0; i < len; i++) {
        sum = sum + values[i];
    }
    avg = sum / (double) len;
    return NULL;
}

void *calcMin(void *arg) {
    int i = 0;
    int *values;
    values = (int *) arg;
    minValue = values[0];
    for (i = 0; i < len; i++) {
        if (values[i] < minValue) {
            minValue = values[i];
        }
    }
    return NULL;
}

void *calcMax(void *arg) {
    int i = 0;
    int *values;
    values = (int *) arg;
    maxValue = values[0];
    for (i = 0; i < len; i++) {
        if (values[i] > maxValue) {
            maxValue = values[i];
        }
    }
    return NULL;
}


int main(void) {
    pthread_t avgPth, minPth, maxPth;
    int values[] = {90, 80, 78, 95, 79, 72, 85};
    pthread_create(&avgPth, NULL, calcAvg, values);
    pthread_create(&minPth, NULL, calcMin, values);
    pthread_create(&maxPth, NULL, calcMax, values);
    pthread_join(avgPth, NULL);
    pthread_join(minPth, NULL);
    pthread_join(maxPth, NULL);
    printf("Average: %d \n", avg);
    printf("Minimum: %d \n", minValue);
    printf("Maximum: %d \n", maxValue);
    return 0;
}
