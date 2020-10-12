#include <stdio.h>
#include <string.h>

void ArrayAppend(int arr[], int data, int size){
  size++;
  arr[size] = data;
}

void swap(char *str1, char *str2){
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}

void stringdigitsum(char str1[], char str2[]){
  if (strlen(str1) > strlen(str2)){
    swap(str1, str2);
  }
  int n1 = strlen(str1), n2 = strlen(str2), diff = n2-n1, size = 1, carry = 0;
  int arr[size];
  arr[0] = 0;

    for (int i=n1-1; i>=0; i--){
        int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry);
        ArrayAppend(arr, sum%10, size);
        carry = sum/10;
    }
    for (int i=n2-n1-1; i>=0; i--){
        int sum = ((str2[i]-'0')+carry);
        ArrayAppend(arr, sum%10, size);
        carry = sum/10;
    }
    if (carry)
        ArrayAppend(arr, carry, size);

    for (int i=size-1; i>0; i--){
      printf("%d", arr[i]);
    }
}

int main(){
  char str1[20], str2[20];
  scanf("%[^\n]%*c", str1);
  scanf("%[^\n]%*c", str2);

  stringdigitsum(str1, str2);

  return 0;
}
