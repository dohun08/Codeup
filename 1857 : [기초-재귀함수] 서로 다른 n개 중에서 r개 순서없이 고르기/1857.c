#include <stdio.h>
int f(int n, int r){
    if(n==r) return 1;
    else if(r==1) return n;
    else if(n<r) return 0;
    else{
        return f(n-1, r-1) + f(n-1, r);
    }
}
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", f(n-1, r) );
    printf("%d", f(n, r));
    return 0;
}