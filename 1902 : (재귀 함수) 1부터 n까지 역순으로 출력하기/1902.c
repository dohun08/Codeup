#include <stdio.h>
int f(int n){
    if(n==0){
        return 0;
    }
    else{
        
        printf("%d\n", n);
        f(n-1);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}