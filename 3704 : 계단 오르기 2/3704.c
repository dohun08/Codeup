#include <stdio.h>
int st[100001];
int dp[100001]={1, 1, 2};
int f(int n){
    if(n==1) return 1;

    if(dp[n]!=0) return dp[n];
    
	else return dp[n] = (f(n-1) + f(n-2) + f(n-3))%1000;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n)%1000);
    return 0;
}

