#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a != b)
    {
        printf("Jumlah tidak sama");
        return 1;
    }
    int arr1[a];
    int arr2[b];
    for(int i = 0; i < a; ++i)
    {
        scanf("%d", &arr1[i]);
    }
    for(int j = 0; j < b; ++j)
    {
        scanf("%d", &arr2[j]);
    }
    for(int i = 0; i < a; ++i)
    {
        int hasil = arr1[i] * arr2[i];
        printf("%d ", hasil);
    }
    return 0;
}