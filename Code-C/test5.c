#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float x, y;

    scanf("%d %d", &a, &b);
    printf("%d %d\n", a + b, a - b); // Corrected: Added format specifiers for integers

    scanf("%f %f", &x, &y);
    printf("%.2f %.2f\n", x + y, x - y); // Corrected: Added format specifiers for floats

    return 0;
}
