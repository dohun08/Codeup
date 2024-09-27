#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int DT[10000]={0, 1, 1};
    for(int i=2; i<=n; i++){
        DT[i] = DT[i-1] + DT[i-2];
    }
    printf("%d", DT[n]);
    return 0;
}