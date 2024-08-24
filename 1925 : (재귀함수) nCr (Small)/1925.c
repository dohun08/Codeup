#include <stdio.h>
int f(int n, int r){
    if (n == r || r == 0) {
        return 1;
    }
    return f(n - 1, r - 1) + f(n - 1, r);
}
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r));
    return 0;
}