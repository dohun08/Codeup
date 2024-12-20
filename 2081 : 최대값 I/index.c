#include <stdio.h>
int main(){
    int max = 0;
    int a[10001] = {};
    for(int i=0; i<9; i++){
        scanf("%d", &a[i]);
        if (max < a[i]) max = a[i];
    }
    for(int i=0; i<9; i++){
        if(max == a[i]) printf("%d\n%d", a[i], i+1);
    }
    return 0;
}