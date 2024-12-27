#include <stdio.h>
#include <math.h>
int main(){
    float A, B;

    scanf("%f" "%f", &A, &B);

    float C = sqrt ( B*B - A*A);

    printf("Alas = %.f cm\n", C);
    printf("Tinggi = %.f cm\n", A);
    printf("Keliling = %.f cm\n", A + B + C);
    printf("Luas = %.f cm^2", A * C * 0.5);
}