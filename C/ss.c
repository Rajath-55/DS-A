#include <stdio.h>
#include <string.h>
#include <math.h>
#define MxN INT_MAX;
void reverse(char str1[], int index, int size)
{
    char temp;

    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;

    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}

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
    reverse(c1, 0, strlen(c1) - 1);
    reverse(c2, 0, strlen(c2) - 1);
    if (flag)
    {
        for (int i = c2size; i < c1size; ++i)
        {
            c2[i] = '0';
        }
    }
    else
    {
        for (int i = c1size; i < c2size; ++i)
        {
            c1[i] = '0';
        }
    }
    // if(flag){
    //     for(int i=0;i<c1size;++i){
    //         printf("%c", c2[i]);
    //     }
    //     printf("\n");
    // // }else{
    //      for(int i=0;i<c1size;++i){
    //         printf("%c", c1[i]);
    //     }
    // // }
    // printf("\n");
    int carry = 0;
    int carryd = 0,r=0;
    int result[100000];
    int resdif[100000];
    if (flag)
    {
        for (int i = 0; i < c1size; ++i)
        {
            int sum = c1[i] + c2[i] - '0' - '0' + carry;
            // int diff = c1[i]-c2[i]-carryd;
            // if(diff<0){
            //     diff+=10;
            //     carryd=1;
            // }else{
            //     carryd=0;
            // }
            // resdif[i]=diff;
            result[i]=sum%10;
            carry = sum/10;
        }
        if(carry==1){
            result[c1size]=1;
            r=1;
        }
    }
    else{
         for (int i = 0; i < c2size; ++i)
        {
            int sum = c1[i] + c2[i] - '0' - '0' + carry;
            // int diff = c1[i]-c2[i]-carryd;
            // if(diff<0){
            //     diff+=10;
            //     carryd=1;
            // }else{
            //     carryd=0;
            // }
            // resdif[i]=diff;
            result[i]=sum%10;
            carry = sum/10;
        }
        if(carry==1){
        result[c2size]=1;
        r=1;
        }

    }
    printf("Sum:\n");
    if(!r){
    for(int i=(c1size>c2size?c1size-1:c2size-1);i>=0;--i){
        printf("%d", result[i]);
    }
    }
    else{
        for(int i=(c1size>c2size?c1size:c2size);i>=0;--i){
        printf("%d", result[i]);
    }
    
}
printf("\n");

if(flag){
    for(int i=0;i<c1size;++i){
        int diff = c1[i]-c2[i]-carryd;
        if(diff<0){
            diff +=10;
            carryd=1;
        }else{carryd=0;}
        resdif[i]=diff;
    }

}if(!flag){
    for(int i=0;i<c2size;++i){
        int diff = c2[i]-c1[i]-carryd;
        if(diff<0){
            diff +=10;
            carryd=1;
        }else{carryd=0;}
        resdif[i]=diff;
    }
}
if(flag){
    printf("Difference:\n");
for(int i=(c1size>c2size?c1size-1:c2size-1);i>=0;--i){
        printf("%d", resdif[i]);
    }
}
else{
    printf("Difference:\n-");
    for(int i=(c1size>c2size?c1size-1:c2size-1);i>=0;--i){
        printf("%d", resdif[i]);
    }

}
}


