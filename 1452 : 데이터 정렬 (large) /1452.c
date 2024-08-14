#include <stdio.h>
void quick_sort(int * arr, int left, int right){
    int pL = left;
    int pR = right;
    int pB = arr[(left+right)/2];
    do
    { 
        while (arr[pL]<pB) pL++;
        while (arr[pR]>pB) pR--;
        if(pL<=pR){
            int temp = arr[pL];
            arr[pL] = arr[pR];
            arr[pR] = temp;
            pL++;
            pR--;
        }
    } while (pL<=pR);
    if(pR>left){
        quick_sort(arr, left, pR);
    }
    if(pL<right){
        quick_sort(arr, pL, right);
    }
    
}
int main(){
    int n, d[100001]={};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &d[i]);
    }
    quick_sort(&d[0], 0, n-1);
    for(int i=0; i<n; i++){
        printf("%d\n", d[i]);
    }
    return 0;
}