#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (char *x, char *y){
  char temp = *x;
  *x = *y;
  *y = temp;
}

void permute(char *a, int startindex, int endindex)
{
  if (startindex == endindex) printf("%s\n", a);
       for (int i = startindex; i <= endindex; i++) {
       swap((a+startindex), (a+i));
       permute(a, startindex+1, endindex);
       swap((a+startindex), (a+i));
       }
}

int main(){
    char str[50];
    scanf("%s", str);
    int n = strlen(str);
    permute(str, 0, n-1) ;
}
