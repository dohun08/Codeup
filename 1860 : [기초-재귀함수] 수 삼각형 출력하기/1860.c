#include <stdio.h>
int num=2;
int i=1;
void f(int n){
    if(i==num){
        printf("\n");
        i=1;
        num++;
    }
    if(i==n){
        return ;
    }
    else{
        printf("%d ", i);
        i++;
        f(n);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", n);
    return 0;
}