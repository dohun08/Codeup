#include <stdio.h>
int memo[100];
long long int fibo(long long int n){
    if (n <= 2) return 1;
    else if (!memo[n])
    {
        memo[n] = (fibo(n - 1) + fibo(n - 2))%10009;
    }
    return memo[n];
}

int main(){
    long long int n;
    scanf("%lld", &n);
    printf("%lld",  fibo(n));
    return 0;
}
//f(1) = 1 f(2) = 1 f(3) = 2 f(4) = 3
//1 1 2 3 5 8 13 21 34 55 