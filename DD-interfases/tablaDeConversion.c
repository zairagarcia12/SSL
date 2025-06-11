#include <stdio.h>
#include "conversion.h"

const int MIN = 0;
const int MAX = 100;
const int PASO = 10;

int main(){
    printf("tabla de Celsius a Fahrenheit:\n");
    for (int c = MIN; c <= MAX; c += PASO) {
        printf("%3d °c = %6.2f °F\n", c, fahrenheit(c));
    }

    printf("tabla de Fahrenheit a Celsius:\n");
    for (int f = 32; f <= 212; f += 18) {
        printf("%3d °F = %6.2f °C\n", f, celsius(f));
    }

    return 0;
}