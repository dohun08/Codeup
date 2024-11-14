#include <stdio.h>
int memo[1001][1001];
int f(int n, int r){
    if(memo[r][n]) return memo[r][n];
    else if(n == 1 || r == 1) return memo[n][r]=1;
    else return memo[n][r] = memo[r][n] = f(n-1, r) + f(n, r-1);
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r)%100000000);
    return 0;
}
