#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int prime ( int n){
	for(long int i=2;i*i<=n;++i){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	int a[1000000]={0};
	int j = 0;
	for(int i=2;i<=100000;i++){
		if(prime(i)){
			a[j]=i;
			j++;
		}
	}
	int x,k;
	while(t--){
		scanf("%ld %ld", &x, &k);
		int m = x;
		x/=2;
	    int count =0;
		for(int i=0;a[i]!=0;++i){
			
				while(x%a[i]==0){
					count++;
					x/=a[i];
				}
			
		}
		if(x!=1){
			count++;
		}
		if(count<=k)
			printf("1\n");
		else
			printf("0\n")
	}
}