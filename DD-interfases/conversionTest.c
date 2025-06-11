#include <assert.h>
#include <math.h>
#include "conversion.h"

const double TOLERANCIA = 0.001;

int comparar(double a, double b) {
    return fabs(a - b) < TOLERANCIA;
}

int main() {
    assert(comparar(celsius(32.0), 0.0));
    assert(comparar(celsius(212.0), 100.0));
    assert(comparar(fahrenheit(0.0), 32.0));
    assert(comparar(fahrenheit(100.0), 212.0));

    return 0;
}

