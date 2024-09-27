#include <stdio.h>
int main(){
    long long int DT[10000001]={1};
    
    long long int n;
    scanf("%lld", &n);
    for(long long int i=1; i<=n; i++){
        DT[i] = DT[i-1]+i;
    }
    printf("%lld", DT[n]%137);
    return 0;
}