#include <stdio.h>
int nnn = 1;
int i=0, j=0;
int count = 0;
int d[1000][1000] = {};
int f(int n, int m){
    if(i==n && j==m){
        printf("%d", d[i-1][j-1]);
        return 0;
    }
    else if(nnn == j){
        nnn++;
        j=0;
        i++;
        f(n, m);
    }
    else if(j==0){
        d[i][j]=1;
        j++;
        f(n, m);
    }
    else{
        d[i][j] = d[i-1][j-1] + d[i-1][j];
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