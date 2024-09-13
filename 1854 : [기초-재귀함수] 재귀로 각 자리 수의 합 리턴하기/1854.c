#include <stdio.h>
int f(char * p){
    if(p[0] == '\0'){
        return 0;
    }
    else{
        return p[0]-48 + f(++p);
        
    }
}
int main(){
    char d[100000] = {};
    scanf("%s", d);
    printf("%d", f(d));
    return 0;
}