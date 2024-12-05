#include <stdio.h>
int main(){
    int n, d[500001], max = 0, num;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        d[num]++;
        if(max < num) max = num;
    }
    for(int i=0; i<=max; i++){
        if(d[i]){
            for(int j=0; j<d[i]; j++){
                printf("%d ", i);
            }
        }
    }
    return 0;
}