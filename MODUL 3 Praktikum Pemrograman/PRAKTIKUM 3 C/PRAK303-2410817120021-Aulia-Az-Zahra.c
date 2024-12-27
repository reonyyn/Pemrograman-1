#include <stdio.h>
int main()
{
    int N;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &N);

        if(N > 0)
        {
            printf("positif\n");
        } 
            else if(N < 0)
        {
            printf("negatif\n");
        } 
            else
        {
            printf("nol");
        }
    }
        return 0;
} 