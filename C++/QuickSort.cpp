#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a= *b;
    *b = temp;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i=low -1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j] );
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}
void QuickSort(int arr[], int low, int high){
    if(low<high){
        int part_index = partition(arr, low, high);
        QuickSort(arr, part_index+1, high);
        QuickSort(arr, low, part_index -1);
    }
}
int main(){
    int n;
    cout<<"Enter no of Elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a, 0, n-1);
    cout<<"After Sorting :\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}