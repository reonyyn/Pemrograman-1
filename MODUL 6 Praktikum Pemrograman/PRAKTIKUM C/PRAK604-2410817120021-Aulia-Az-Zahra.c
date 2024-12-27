#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1002];
    char str2[1002];
    char str3[1002];
    fgets(str1, 1002, stdin);
    fgets(str2, 1002, stdin);
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    if (str1_len != str2_len)
    {
        printf("Panjang kalimat berbeda, pesan palsu");
        return 1;
    }

    int char_sama = 0;
    int char_tidaksama = 0;
    for(int i = 0; str1[i] != '\n'; ++i)
    {
        if(str1[i] == ' ' && str2[i] == ' ')
        {
            str3[i] = ' ';
        }
        else
        {
            if(str1[i] == str2[i])
            {
                str3[i] = '*';
                char_sama++;
            }
            else if(str1[i] != str2[i])
            {
                str3[i] = '#';
                char_tidaksama++;
            }
        }
        printf("%c", str3[i]);
    }

    printf("\n* = %d", char_sama);
    printf("\n# = %d", char_tidaksama);
    if (char_sama >= char_tidaksama)
    {
        printf("\nPesan Asli");
    }
    else if(char_sama < char_tidaksama)
    {
        printf("\nPesan Palsu");
    }
    return 0;
}