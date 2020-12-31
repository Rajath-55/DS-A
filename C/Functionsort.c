#include<stdio.h>
int* sort(int *arr, int length){
    for(int i=0;i<length;++i){
        for(int j=i+1;j<length;++j){
            if(*(arr + i)>*(arr + j)){
                int temp = *(arr + i);
                *(arr + i)= *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    return arr;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d", &a[i]);
    }
    int* res = sort(a, n);
    for(int i=0;i<n;++i){
        printf("%d ", res[i]);
    }
    printf("\n");
    
}