#include <stdio.h>
int memo[1001][1001];
int f(int n, int r){
    if(n==1 || r==1) return memo[n][r] = 1;
    else if(memo[n][r]) return memo[n][r]%100000000;
    else return memo[n][r] = f(n-1, r)%100000000 + f(n, r-1)%100000000;
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r)%100000000);
    return 0;
}
