#include "../lib/deitel.h"

main()
{
    double temperatura;

    printf("Coloque la temperatura a convertir a F y K: ");
    scanf("%lf", &temperatura);

    printf("Grados F: %.2f, Grados K: %.2f", celsiusToFahrenheit(temperatura), celsiusToKelvin(temperatura));
    return 0;
}
