#include <stdio.h>
int memo[10001][10001];
int f(int n, int r){
    if(memo[n][r]) return memo[n][r];
    else if(r==n) return 1;
    else if(r==1) return n;
    else return memo[n][r] = f(n-1, r-1) + f(n-1, r);
}
int DT[10001][10001];
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) DT[i][j] = 1;
            else if(j==1) DT[i][j] = i%100000007;
            else DT[i][j] = DT[i-1][j]%100000007 + DT[i-1][j-1]%100000007;
        }
    }
    printf("%d", DT[n][r]%100000007);
    return 0;
}
