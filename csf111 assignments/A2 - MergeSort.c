#include <stdio.h>

void main() {
	int A[10] = {4,9,6,12,2,8,6,3,1,7} ;
	int a=10, mid, end, B[10], size = 1;

  while(size <= a) {
    int i, j, k = 0, start = 0 ;

    while(start+size<=a) {
			mid = start + size ;
			end = start + 2*size - 1 ;

      if(end >= a) {
				end = a - 1 ;
			}

			i = start ;
			j = mid ;

    	while((i < mid) && (j <= end)) {
				if(A[i] <= A[j]) {
          B[k++] = A[i++] ;
        }
				else {
          B[k++] = A[j++] ;
        }
			}

			while(i<mid) {
        B[k++] = A[i++] ;
      }

			while(j<=end) {
        B[k++] = A[j++] ;
      }
			start = end + 1 ;
		}

		for(i=start; k<a; i++){
        B[k++] = A[i] ;
    }

    i=0;
		while(i<a) {
			int temp=A[i] ;
			A[i]=B[i];
			B[i]=temp;
			i=i+1;
		}
      size = 2*size ;
	}
  for (int i=0; i<a; i++){
    printf("%d ", A[i]) ;
  }
}
