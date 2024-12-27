#include <stdio.h>
#include <math.h>

int main() 
{
    int A, B;
    
    scanf("%d", &A); 
    scanf("%d", &B);

    int alas = sqrt(B * B - A * A);

    int keliling = A + B + alas; 
    float luas   = 0.5 * A * alas;

    printf("Alas     = %d cm\n", alas); 
    printf("Tinggi   = %d cm\n", A);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas     = %.f cm^2\n", luas); 

    return 0;
}