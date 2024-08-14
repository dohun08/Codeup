#include <stdio.h>
int num;
int f(int n){
    if(num==n){
        printf("\n");
        n--;
        num=0;
    }
    if(n==0){
        return 0;
    }
    else{
        printf("*");
        num++;
        f(n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}