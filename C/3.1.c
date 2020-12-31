/*

Q3.1 2D Array, Row Major
````````````````````````````````````````
Input Format: first two integers m, n decide the dimension of matrix, following
              integers entered keep updating the matrix. To end, enter '0'

````````````````````````````````````````

*/

#include <stdio.h>
int m, n; //dimensions of matrix

void p1(int A[m][n], int p, int x, int y){  // placing element in phase 1 (i.e to shift elemnts to the right to place an element)

    for(int i=m-1; i>=x; i--){
        for(int j=n-1; j>=0; j--){

            if(i==m-1 && j==n-1){
                continue;
            }

            if(i>x || j>=y){
                
                if(j != n-1){
                    A[i][j+1]=A[i][j];
                }else{
                    A[i+1][0]=A[i][j];
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

    int phase=1;

    while(1){
        int p;
        scanf("%d", &p);
        int placed=0;

        if(p==0){
            break;
        }

        if(phase==1 && placed==0){
            for(int i=0; i<m && placed==0; i++){
                for(int j=0; j<n && placed==0; j++){
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

        if(A[m-1][n-1]){
            phase=2;
        }

        if(phase==2 && placed==0){
            for(int i=0; i<m && placed==0; i++){
                for(int j=0; j<n && placed==0; j++){
                    if(A[i][j]>=p){

                        if(j!=0){
                            p2(A, p, i, j-1);
                            placed=1;
                            break;
                        }else if(i!=0){
                            p2(A, p, i-1, n-1);
                            placed=1;
                            break;
                        }else{
                            p2(A, p, 0, 0);
                            placed=1;
                            break;
                        }


                    }
                }
            }

            if(placed==0){
                p2(A, p, m-1, n-1);
                placed=1;
            }
        }

        print(A);
        printf("\n");
    }

}