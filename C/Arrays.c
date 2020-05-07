#include <stdio.h>
int lena;
int sum[100000];
int diff[100000]={0};

int add(int A[], int B[]){

    int val, carry=0;

    for(int i=0; i<lena; i++){
        val = A[lena-1-i] + B[lena-1-i] + carry;

        if(val>=10){
            val = val - 10;
            carry = 1;
            sum[i] = val;
        }else{
            sum[i] = val;
            carry = 0;
        }

    }
    return carry;
}

void diffr(int A[], int B[]){

    int val, bor=0;

    for(int i=0; i<lena; i++){
        
        if(A[lena-1-i]-bor>=B[lena-1-i]){
            val=A[lena-1-i]-B[lena-1-i]-bor;
            diff[i]=val;
            bor=0;
        }else{
            val=A[lena-1-i]-B[lena-1-i]-bor+10;
            diff[i]=val;
            bor=1;
        }
    }
}


int main(){
    char n1[100000];
    char n2[100000];

    scanf("%s", n1);
    scanf("%s", n2);

    printf("\n ");

    int lenb;

    for(int i=0; n1[i]!='\0'; i++){lena = i+1;}
    for(int i=0; n2[i]!='\0'; i++){lenb = i+1;}

    int temp;
    int neg=0;

    if(lenb>lena){
        temp=lena;
        lena=lenb;
        lenb=temp;
        neg=1;
    }

    int a[lena];
    int b[lena];

    for(int i=0; i<lena; i++){
        if(neg==0){
            a[i] = n1[i] - '0';
        }else{
            a[i] = n2[i] - '0';
        }
        printf("%d", a[i]);

        if((lena-4-i)%3==0){
            printf(",");
        }
    }

    printf("\b = n1\n ");

   for(int i=0; i<lena; i++){
       if(i>=lena-lenb){
            if(neg==0){
                 b[i] = n2[i-lena+lenb] - '0';
            }else{
                 b[i] = n1[i-lena+lenb]-'0';
            }
        }else{
            b[i]=0;
        }

        printf("%d", b[i]);

        if((lena-4-i)%3==0){
            printf(",");
        }
   }

    printf("\b = n2\n\n");

    if(add(a, b)){
        printf(" 1");
    }else{
        printf(" ");
    }

    for(int i=0; i<lena; i++){
        printf("%d", sum[lena-1-i]);

        if((lena-4-i)%3==0){
            printf(",");
        }
    }

    printf("\b = sum");

    if(lena==lenb){
        for(int i=0; i<lena; i++){
            if(b[lena-lenb+i]>a[i]){
                diffr(b, a);
                neg=1;
                break;
            }else if(a[i]>b[lena-lenb+i]){
                diffr(a, b);
                break;
            }

        }
    }else{
        diffr(a, b);
    }

    printf("\n");

    if(neg){printf("-");}else{printf(" ");}

    int flag=0;

    for(int i=0; i<lena; i++){
        if(diff[lena-1-i] || flag || i==lena-1){
            printf("%d", diff[lena-1-i]);
            flag=1;
        }

        if((lena-4-i)%3==0){
            printf(",");
        }
    }


    printf("\b = difference");

    printf("\n");

}