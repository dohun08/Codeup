#include <stdio.h>
int main(){
    int n;
    int count = 0;
    int d[1000001];
    int max=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &d[i]);
        if(max < d[i]) max = d[i];
    }
    int DT[max+1];
    DT[1] = 1;
    DT[2] = 1;
    for(int i=3; i<=max; i++){
        DT[i] = DT[i-1] + DT[i-2];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(DT[d[i] + 1] % DT[d[j] + 1] == 0){
                count++;
            }
        }
    }
    
    printf("%d", count);
    return 0;
}