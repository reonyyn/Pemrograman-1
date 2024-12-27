#include <stdio.h>
int main()
{
    int a;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
            else if (a == 0)
        {
            printf("Nol\n");
        } 
            else if(a > 0 && a < 10)
        {
            printf("Satuan\n");
        }
            else if (a > 10 && a < 20)
        {
            printf("Belasan\n");
        }
            else if (a >= 20 && a < 100 || a == 10)
        {
            printf("Puluhan\n");
        }
            else
        {
            printf("Anda menginput Melebihi Limit Bilangan\n");
        }
    }
    return 0;
} 