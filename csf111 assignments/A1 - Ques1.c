#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      for (int k=0; k<n; k++){
        printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
      }
    }
  }
  return 0;
}
