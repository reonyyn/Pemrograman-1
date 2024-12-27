#include <stdio.h>
void Biodata(int lahir, char nama[], char asal[])
{
    //Lengkapi Function ini
    int tahun_Sekarang = 2020;
    int umur = tahun_Sekarang - lahir;
    printf("Perkenalkan Nama Saya : %s", nama);
    printf("\nUmur Saya : %d", umur);
    printf("\nSaya Adalah Angkatan : %d", tahun_Sekarang);
    printf("\nAsal Saya dari : %s", asal);
}
int main()
{
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&Namaku);
    scanf(" %[^\n]%*c",&Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
} 