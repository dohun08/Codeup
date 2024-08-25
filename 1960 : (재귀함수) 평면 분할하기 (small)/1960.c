#include <stdio.h>
int f(int n){
    if(n==0){
        return 1;
    }
    else{
        return (f(n-1) + n)%137;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n)%137);
    return 0;
}