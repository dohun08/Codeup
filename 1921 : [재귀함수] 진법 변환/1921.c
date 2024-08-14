#include <stdio.h>
int f(int n, int k){
    if(n==0){
        return 0;
    }
    else{
        if(n%k>9){
            f(n/k, k);
            if(n%k==10){
                printf("A");
            }
            else if(n%k==11){
                printf("B");
            }
            else if(n%k==12){
                printf("C");
            }
            else if(n%k==13){
                printf("D");
            }
            else if(n%k==14){
                printf("E");
            }
            else if(n%k==15){
                printf("F");
            }
        }
        else{
            f(n/k, k);
            printf("%d", n%k);
        }
        
    }
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    f(n, k);
    return 0;
}