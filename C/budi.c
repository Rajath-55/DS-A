#include <stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

int main(){
  int entryelements, rows;
  printf("Enter no. of rows of sq. matrix\n");
  scanf("%d", &rows);
  printf("Enter no. of entries for matrix\n");
  scanf("%d", &entryelements);
  int arr[entryelements], newarray[rows];
  printf("Enter the no.s\n");
  for (int i=0; i<entryelements; i++){
    scanf("%d", &arr[i]);
  }

  if (entryelements < rows*rows){
    bubblesort(arr, entryelements);
    for (int i=0; i<entryelements; i++){
      newarray[i] = arr[i];
    }
    for (int i=entryelements; i<(rows*rows); i++){
      newarray[i] = 0;
    }
  }

  else if (entryelements = (rows*rows)){
    bubblesort(arr, entryelements);
    for (int i=0; i<entryelements; i++){
      newarray[i] = arr[i];
    }
  }

  else {
    int elementstoremove = entryelements - (rows*rows);
    bubblesort(arr, entryelements);
    while(elementstoremove >= 0){
      arr[0] = arr[entryelements-1] + 1;
      bubblesort(arr, entryelements);
      entryelements--, elementstoremove--;
    }
    for (int i=0; i<entryelements; i++){
      newarray[i] = arr[i];
    }
  }

  int dynamicarray[rows][rows];
  int *p = newarray;
  for (int i=0; i<rows; i++){
    for (int j=0; j<rows; j++){
      dynamicarray[i][j] = *p;
      p++;
    }
  }

  printf("Row Major\n");
  for (int i=0; i<rows; i++){
    for (int j=0; j<rows; j++){
      printf("%d\t", dynamicarray[i][j]);
      if (j == rows - 1){
        printf("\n");
      }
    }
  }

  printf("\n");

  printf("Column Major\n");
  for (int i=0; i<rows; i++){
    for (int j=0; j<rows; j++){
      printf("%d\t", dynamicarray[j][i]);
      if (j == rows - 1){
        printf("\n");
      }
    }
  }

  return 0;
}