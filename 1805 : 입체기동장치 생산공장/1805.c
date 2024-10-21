#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[101] = {};
    int m, num, max = 0;
    for(int i=0; i<100; i++){
        arr[i] = -1;
    }
    for(int i=0; i<n; i++){
        scanf("%d %d", &m, &num);
        arr[m] = num;
        if(max < m) max = m; 
    }
    for(int i=1; i<=max; i++){
        if(arr[i]!=-1){
            printf("%d %d\n", i, arr[i]);
        }
            
    }
    return 0;
}