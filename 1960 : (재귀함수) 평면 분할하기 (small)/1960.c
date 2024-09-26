#include <stdio.h>
int memo[100000];
int f(int n){
    if(n==0) return 1;
    else return memo[n] = (f(n-1) + n)%137;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n)%137);
    return 0;
}
