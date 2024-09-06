#include <stdio.h>
typedef struct stack
{
    char arr[9999];
    int top;
}stack;

void NewStack(stack * p);
void pushStack(stack * p, int value);
void printStack(stack * p, int n);
int main(){
    stack stk;
    int n;
    char value[400];
    scanf("%d", &n);
    getchar();
    NewStack(&stk);
    fgets(value, 300, stdin);
    for(int i=0; value[i]!='\0'; i++)
    {
        pushStack(&stk, value[i]);
    }
    printStack(&stk, n);
}

void NewStack(stack * p){
    p ->top = -1;
}
void pushStack(stack * p, int value){
    if((p->top) >= 9999){
        printf("값이 초과되어 push할 수 없습니다. 다시 입력해주세요.\n");
        return ;
    }
    else{
        p->arr[++(p->top)] = value;
    }
}
void printStack(stack * p, int n){
    int num = 0;
    if(n%3!=0) num=1;
    for(int i=0; i<=p->top; i++){
        if(n%3==0 && num && n!=0){
            printf(",");
        }
        n--;
        num=1;
        printf("%c", p->arr[i]);
    }
}