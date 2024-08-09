#include <stdio.h>
#define MAX 51
#define MOD 100000000
long long int d[MAX][MAX] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,}};
long long int num, i=1, j, k;
int f(int n, int m){
    if(n==j && i==m){
        printf("%lld", d[i-1][j-1]%MOD);
        return 0;
    }
    else if(j==0){
        d[i][j]=1;
        j++;
        num++;
        f(n, m);
    }
    else if(50==j){
        i++;
        j=0;
        num = 0;
        f(n, m);
    }
    else{
        d[i][j] = d[i-1][j] + d[i][j-1];
        j++;
        num++;
        f(n, m);
    }
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    f(n, m);
    return 0;
}