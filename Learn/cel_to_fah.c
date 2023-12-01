#include <stdio.h>

// Function prototype
double cel_to_fah(double cel);
double fah_to_cel(double fah);

int main()
{
    double cel;
    double fah;
    printf("Enter C temp: ");
    scanf("%lf", &cel);
    fah = cel_to_fah(cel);
    printf("%.2lf\n", fah);
    return 0;
}

/**
 * @brief Convert Celsius to Fahrenheit.
 *
 * @param cel Celsius.
 * @return double Fahrenheit.
 */
double cel_to_fah(double cel)
{
    // Converting Celsius to Fahrenheit:
    // Multiply by 1.8 (or 9/5) and add 32
    return ((cel * 1.8) + 32);
}

/**
 * @brief Convert Fahrenheit to Celsius.
 *
 * @param fah Fahrenheit.
 * @return double Celsius.
 */
double fah_to_cel(double fah)
{
    // Converting Celsius to Fahrenheit:
    // Multiply by 1.8 (or 9/5) and add 32
    return ((fah - 32) / 1.8);
}