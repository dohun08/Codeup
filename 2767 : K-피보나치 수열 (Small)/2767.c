#include <stdio.h>
int main(){
    int n, m;
    long long int d[1000001]={0};
    long long int sum=0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%lld", &d[i]);
        sum = (sum + d[i]) % 100007;
    }
     d[n] = sum;
    for(int i=n; i<=m; i++){
        d[i+1] = (d[i]-d[i-n]+d[i])%100007;
        if (d[i+1] < 0) {
            d[i+1] += 100007;
        }
    }
    printf("%lld", d[m-1]%100007);
    return 0;
}