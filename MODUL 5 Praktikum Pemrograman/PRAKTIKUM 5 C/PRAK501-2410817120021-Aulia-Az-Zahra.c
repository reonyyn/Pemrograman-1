#include <stdio.h>
//Buatlah Function Disini
int MaxBilangan(int a, int b, int c, int d)
{
    int Max;
    if (a >= b && a >= c && a >= d)
    {
        Max = a;
    }
    else if(b >= a && b >= c && b >= d)
    {
        Max = b;
    }
    else if(c >= a && c >= a && c >= d)
    {
        Max = c;
    }
    else if(d >= a && d >= b && d >= c)
    {
        Max = d;
    }
    return Max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
} 