/*


Input Format:

First integer 'a' denotes the size of the integer array to be sorted
Following 'a' integers are the elements in the array


Example:

INPUT:
10
4 9 6 12 2 8 6 3 1 7

OUTPUT:
1 2 3 4 6 6 7 8 9 12

*/

#include <stdio.h>

int main(){


    //taking input
    int a;
    scanf("%d", &a);
    int A[a], B[a];

    for(int i=0; i<a; i++){
        scanf("%d", &A[i]);
    }
    //taking input



    int size=1; // starting with a subarray of size 1
    
    while(size<a){  // iterates the number of times an array must undergo the process to be sorted completely                                                        
        int start=0;
        int k=0; // k keeps count of how many elemnts are there in array B at any given time

        while(start<a){ // picks pairs of subarrays (iterated through the entire subarray)
 
            int i=start;    // i variable iterates through the first subarray

            int j=start+size; // j variable iterates through the second subarray
            
            int ci=0, cj=0;  // ci and cj keep count of how many elements have already been put into arrray B from their respective subarrays

            while( ((ci<size) || (cj<size)) && k!=a ){ // picks 1 element from each subarray and comapres them 

                if( ((A[i]<=A[j]) && ci!=size) || cj==size || (j>=a) ){
                    B[k]=A[i];
                    i++;
                    k++;
                    ci++;
                }else{
                    B[k]=A[j];
                    j++;
                    k++;
                    cj++;
                }

            }

            start = start + (2*size); // going forward to the next pair of subarrays

        }

        
        //Recycling arrays
        for(int i=0; i<a; i++){
            A[i]=B[i];
            B[i]=0;
        }
        //Recycling arrays


        //doubling size of subarray
        size=size*2;
        //doubling size of subarray
    
    }

    for(int i=0; i<a; i++){
        printf("%d ", A[i]);
    }

}


    


