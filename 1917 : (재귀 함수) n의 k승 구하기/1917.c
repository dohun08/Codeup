#include <stdio.h>
long long int sum =1;
long long int f(int n, int m){
    if(m==0){
        printf("%lld", sum);
        return 0;
    }
    else if(m>10){
        sum*=n*n*n*n*n*n*n*n*n*n;
        f(n, m-10);
    }
    else{
        sum*=n;
        f(n, m-1);
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    f(n, m);
    return 0;
}