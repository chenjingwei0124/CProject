#include <stdio.h>

#include "calculator.h"

int main(void)
{
    double left = 12.0;
    double right = 4.0;

    printf("%.1f + %.1f = %.1f\n",
           left, right, calculator_add(left, right));
    printf("%.1f - %.1f = %.1f\n",
           left, right, calculator_subtract(left, right));
    printf("%.1f * %.1f = %.1f\n",
           left, right, calculator_multiply(left, right));

    return 0;
}
