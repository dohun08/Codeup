#include <stdio.h>
int sum = 0;
int nn=0;
int SuperSum(int k, int n){
    if(n!=0){
        SuperSum(k, n-1);
    }
    if(k==0){
        sum+=n;
        return 0;
    }
    else{
        SuperSum(k-1, n);
    }
}
int main(){
    int n, k;
    while( scanf("%d %d", &k, &n) != EOF ){
        SuperSum(k-1, n);
        printf("%d\n", sum);
        sum=0;
    }
	
}