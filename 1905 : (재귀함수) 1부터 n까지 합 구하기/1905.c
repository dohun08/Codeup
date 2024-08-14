#include <stdio.h>
int sum;
int f(int n){
    if(n==0){
        return 0;
    }
    else{
        f(n-1);
        sum+=n;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", sum);
    return 0;
}