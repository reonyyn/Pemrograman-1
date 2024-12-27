#include <stdio.h>
int main()
{
    int n;
    float a, b;
    while(1)
    {
        printf("\nPilih program\n1. penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit");
        printf("\nMasukkan Pilihan : ");
        scanf("%d", &n);

        if(n < 1 || n > 5) 
        {printf("Input anda salah, silahkan coba lagi"); continue;}
        else if (n == 5)
        {printf("Terimakasih, telah menggunakan kalkulator AULIA AZ ZAHRA"); break; }
    
        printf("Masukkan nilai pertama : ");
        scanf("%lf", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%lf", &b);

        if (n == 1)
        {
            printf("Hasil penjumlahan antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a+b);
        }
        else if (n == 2)
        {
            printf("Hasil pengurangan antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a-b);
        }
        else if (n == 3)
        {
            printf("Hasil perkalian antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a*b);
        }
        else if (n == 4)
        {
            printf("Hasil pembagian antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a/b);
        }
    }
    return 0;
}