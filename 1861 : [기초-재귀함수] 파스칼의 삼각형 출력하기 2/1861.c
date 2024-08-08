#include <stdio.h>
int nnn = 1;
int i=0, j=0;
int d[1000][1000] = {};
int f(int n){
    if(i==n){
        return 0;
    }
    else if(nnn == j){
        nnn++;
        j=0;
        i++;
        printf("\n");
        f(n);
    }
    else if(j==0){
        d[i][j]=1;
        printf("%d ", d[i][j]);
        j++;
        f(n);
    }
    else{
        d[i][j] = d[i-1][j-1] + d[i-1][j];
        printf("%d ", d[i][j]);
        j++;
        f(n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}