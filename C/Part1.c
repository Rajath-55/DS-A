#include <stdio.h>
#include <string.h>
#include <math.h>
#define MxN INT_MAX;

int main()
{
    //   char c[MxN];
    char c1[100000];
    scanf("%s", c1);
    char c2[100000];
    scanf("%s", c2);
    int c1size = strlen(c1), c2size = strlen(c2);
    int maxi = (c1size > c2size ? c1size : c2size);
    int flag = 0, rem = 0;
    if (maxi == c1size)
        flag = 1;

    char res[100000];
    int beg = (c1size > c2size ? c1size - c2size : c2size - c1size);
    for (int i = 0; i < beg; ++i)
    {
        res[i] = '0';
    }

    for (int i = beg; i < maxi; ++i)
    {
        res[i] = (flag == 1 ? c2[i - beg] : c1[i - beg]);
    }
    for (int i = 0; i < maxi; ++i)
    {
        printf("%c", res[i]);
    }
    printf("\n");
    for (int i = maxi - 1; i >= 0; --i)
    {
        if (flag)
        {
            char result = c1[i] + res[i];
            if (result >= 106 && i != 0)
            {
                c1[i] = result - 58;
                c1[i - 1] += 1;
                if(c1[i-1]>=58)
                c1[i-1]-=10;
            }
            else if (result < 106)
            {
                c1[i] = result-48;
            }
            else if (result >= 106 && i == 0)
            {
                rem = 1;
                c1[i] = result - 58;
            }
        }
        else
        {
            char result = c2[i] + res[i];
            if (result >= 106 && i != 0)
            {
                c2[i] = result - 58;
                c2[i - 1] += 1;
                if(c2[i-1]>=58)
                c2[i-1]-=10;
            }
            else if (result < 106)
            {
                c2[i] = result-48;
            }
            else if (result >= 106 && i == 0)
            {
                rem = 1;
                c2[i] = result - 58;
            }
        }
    }
    char z[1];
    z[0]='1';
    if(flag&&rem){
      strcat(c1,z);
    }
    if(!flag&rem){
        strcat(c2,z);
    }
    
    
    if(flag){
        for(int i=0;i<maxi;++i){
            printf("%c", c1[i]);
        }
        printf("\n");
    }
    else{
         for(int i=0;i<maxi;++i){
            printf("%c", c2[i]);
        }
        printf("\n");
    }
}
