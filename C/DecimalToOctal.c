#include<stdio.h>
int main()
{
    int n, octal=0, i=1;
    printf("Enter a decimal number\n");
    scanf("%d", &n);
    for(int j=n;j>0;j=j/8){
        octal=octal + (n%8)*i;
        i=i*10;
        n=n/8;
    }
    printf("The octal equivalent is %d", octal);
    return 0;
}