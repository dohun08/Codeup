#include <stdio.h>
int st[100001];
int dp[100001]={-1};
int i;
int max(int a, int b){
    return a>b ? a:b;
}
int f(int n){
    if(dp[n] != -1) return dp[n];
    if(n==1) return dp[n] = st[0];
    if(n==2) return dp[n] = st[0] + st[1];
    if(n==3) return dp[n] = max(st[0]+st[2], st[1]+st[2]);
    return dp[n] = max(f(n-2) + st[n-1], f(n-3) + st[n-2]+st[n-1]);
}
int main(){
    int n;
    scanf("%d", &n);
    for(int j=0; j<n; j++){
        scanf("%d", &st[j]);
        dp[j]=-1;
    }
    dp[n]=-1;
    printf("%d", f(n));
    return 0;
}

