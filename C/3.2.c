/*

Q3.2 2D Array, Column Major
````````````````````````````````````````
Input Format: first two integers m, n decide the dimension of matrix, following
              integers entered keep updating the matrix. To end, enter '0'

````````````````````````````````````````

*/

#include <stdio.h>
int m, n; //dimensions of matrix

void p1(int A[m][n], int p, int x, int y){  // placing element in phase 1 (i.e to shift elemnts to the right to place an element)

    for(int j=n-1; j>=y; j--){
        for(int i=m-1; i>=0; i--){

            if(j>y || i>x){
                
                if(i != 0){
                    A[i][j]=A[i-1][j];
                }else{
                    A[i][j]=A[m-1][j-1];
                }
            }
        }
    }

    A[x][y]=p;

}

void p2(int A[m][n], int p, int x, int y){ // placing element in phase 2 (i.e to shift elements to the left to place an element)

    for(int i=0; i<=x; i++){
        for(int j=0; j<n; j++){
            if(i<x || j<y){
                
                if(j != n-1){
                    A[i][j]=A[i][j+1];
                }else{
                    A[i][j]=A[i+1][0];
                }
            }
        }
    }

    A[x][y]=p;
}

void print(int A[m][n]){

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main(){

    scanf("%d %d", &m, &n);

    int A[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            A[i][j]=0;
        }
    }

    while(1){
        int p;
        scanf("%d", &p);
        int placed=0;

        if(p==0){
            break;
        }

        if(placed==0){
            for(int j=0; j<n && placed==0; j++){
                for(int i=0; i<m && placed==0; i++){
                    if(p<A[i][j]){
                        p1(A, p, i, j);
                        placed=1;
                        break;
                    }

                    if(A[i][j]==0){
                        p1(A, p, i, j);
                        placed=1;
                        break;
                    }
                }
            }

        }

        if(placed==0){
            A[m-1][n-1]=p;
            placed=1;
        }

        print(A);
        printf("\n");
    }

}