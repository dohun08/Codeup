#include <stdio.h>
void hanoi(int n, char a, char b, char c);
int count = 0;
int main(){
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B','C');
    printf("%d", count);
    return 0;
}
void hanoi(int n, char a, char b, char c){
    if(n==1){
        count++;
    }
    else{
        hanoi(n-1, a,c,b);
        count++;
        hanoi(n-1, b,a,c);
    }
}
