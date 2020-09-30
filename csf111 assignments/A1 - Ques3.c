#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d\n", &n);
  int arr[n];
  for (int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }
  for (int i=0; i<pow(2, n); i++){
    printf("{"); for (int j=0; j<n; j++){
      if (((1<<j) & i) > 0){
        printf("%d ", arr[j]);
      }
    } printf("}"); printf("\n");
  }
}
