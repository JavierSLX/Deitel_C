#include <stdio.h>

/* Funcion que muestra un hola mundo */
void saludo(void)
{
    printf("Hola mundo!");
}

/* Funcion que hace la conversion de grados celsius a fahrenheit */
double celsiusToFahrenheit(double temperatura)
{
    return (temperatura * 1.8) + 32;
}

/* Funcion que hace la conversion de grados celsius a kelvin */
double celsiusToKelvin(double temperatura)
{
    return temperatura + 273.15;
}
