#include <stdio.h>

void swap(char a, char b){
    char temp = a;
    a = b;
    b = temp;
}
 
char *revs(char *s, int start, int end){
     if ((s[start] >= 'd' || s[start] >= 'D') && (s[start] <= 's' || s[start] <= 'S'))
     {
         if ((s[end] >= 'd' || s[end] >= 'D') && (s[end] <= 's' || s[end] <= 'S'))
         {
             swap(s[start], s[end]);
         }
     }
     if (end - start <= 2)
     {
         return s;
     }

     return revs(s, start + 1, end - 1);
 }

int main(){

   printf("%s ", revs("Devansh", 0, 6));
}