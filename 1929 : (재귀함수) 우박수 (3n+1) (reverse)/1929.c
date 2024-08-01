#include <stdio.h>
int f(int n){
    if(n==1){
        return 0;
    }
    else if(n%2){
        
        f(3*n+1);
        printf("%d\n", 3*n+1);
    }
    else{
        
        f(n/2);
        printf("%d\n", n/2);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    
    f(n);
    printf("%d\n", n);
    return 0;
}