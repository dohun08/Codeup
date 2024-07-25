#include <stdio.h>
int sum = 1;
int f(int n){
    if(n==0){
        return 0;
    }
    else{
        sum=sum*n;
        f(n-1);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", sum);
    return 0;
}