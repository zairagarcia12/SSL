#include "conversion.h"

double celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;

}

double fahrenheit(double celsius) {
    return celsius* 9.0 / 5.0 + 32.0;
}