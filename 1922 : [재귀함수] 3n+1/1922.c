#include <stdio.h>
int count;
int f(int n){
    if(n==1){
        count++;
        return 0;
    }
    else{
        if(n%2){
            count++;
            f(3*n+1);
        }
        else{
            count++;
            f(n/2);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", count);
    return 0;
}