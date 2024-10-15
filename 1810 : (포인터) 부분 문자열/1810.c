#include <stdio.h>
int main(){
    char str[100000];
    int a, b;
    scanf("%s", str);
    char * s;
    s = str;
    scanf("%d %d", &a, &b);
    for(int i=a-1; i<b; i++){
        printf("%c", *(str+i));
    }
    return 0;
}