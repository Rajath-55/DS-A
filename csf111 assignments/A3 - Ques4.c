#include <stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort_num(int arr[], int n, int* smaller, int* bigger){
    for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
    *smaller = arr[0];
    *bigger = arr[n-1];
}

int main(){
  int n;
  scanf("%d\n", &n);
  int arr[n], smaller, bigger;
  for (int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  sort_num(arr, n, &smaller, &bigger);
  printf("%d\n%d", smaller, bigger);

  return 0;
}
