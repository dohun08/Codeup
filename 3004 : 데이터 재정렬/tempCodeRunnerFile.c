#include <stdio.h>
int main(){
    int n, d[500001] = {}, a[50001]={}, max = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
         d[a[i]]++;
         if(a[i] > max) max = a[i];
    }
    int k = 1;
    for(int i=0; i<=max; i++){
        if(d[i]){
            d[i] = k++; 
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", d[a[i]]-1);
    }
    return 0;
}
