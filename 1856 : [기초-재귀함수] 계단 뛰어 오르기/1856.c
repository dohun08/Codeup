#include <stdio.h>
int memo[10000]={0, 1, 2, 4};
int f(int n){
    if(!memo[n]){
        return memo[n] = f(n-3) + f(n-2) + f(n-1);
    }
    return memo[n];
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}