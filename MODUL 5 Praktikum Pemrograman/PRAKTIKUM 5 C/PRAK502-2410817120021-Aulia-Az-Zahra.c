#include <stdio.h>
#include <stdlib.h>
int hitung(int nilai1, int nilai2)
{
    //Lengkapi Function ini
    return abs(nilai1 - nilai2);
}
int mutlak(int angka)
{
    //Lengkapi Function ini
    return abs(angka);
}
int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int Hasil = hitung(a,b)+hitung(c,d);
    printf("%d", mutlak(Hasil));

    return 0;
    
}