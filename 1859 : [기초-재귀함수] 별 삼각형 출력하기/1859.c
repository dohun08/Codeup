#include <stdio.h>
int num, i=1;
int f(int n){
    if(num==i){
        printf("\n");
        i++;
        num=0;
    }
    if(n==i-1){
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