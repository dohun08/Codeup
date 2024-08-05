#include <stdio.h>
int first=1;
int f(int n){
    if(n==0){
        return 0;
    }
    else{
        if(!(n%10) && first){
            f(n/10);
        }
        else{
            first=0;
            printf("%d", n%10);
            f(n/10);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    if(n==0){
        printf("0");
        return 0;
    }
    f(n);
    return 0;
}