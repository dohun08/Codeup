#include <stdio.h>
long long int d[51][51] = {};
long long int i, j;
int f(int n, int m){
    if(i==m && j==n){
        printf("%lld", d[i-1][j-1]%100000000);
        return 0;
    }
    else if(j==50){
        i++;
        j=0;
        f(n, m);
    }
    else if(i==0 || j==0){
        d[i][j] = 1;
        j++;
        f(n, m);
    }
    else{
        d[i][j] = (d[i-1][j] + d[i][j-1])%100000000;
        j++;
        f(n, m);
    }
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    f(n, m);
    return 0;
}
