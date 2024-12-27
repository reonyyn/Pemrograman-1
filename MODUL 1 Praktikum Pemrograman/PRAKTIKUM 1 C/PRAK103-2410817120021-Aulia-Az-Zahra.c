#include <stdio.h>
int main()
{
    float a, b, x, y;
    a = 9;
    b = 6;
    x = 10;
    y = 7;
    printf("variabel a bernilai %.f\n", a);
    printf("Variabel b bernilai %.f\n", b);
    printf("Variabel x bernilai %.f\n", x);
    printf("Variabel y bernilai %.f\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", (a + b) * x / y);
    return 0;
}