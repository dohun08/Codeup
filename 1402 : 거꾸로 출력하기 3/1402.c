#include <stdio.h>
typedef struct stack
{
    int arr[9999];
    int top;
}stack;

void NewStack(stack * p);
void pushStack(stack * p, int value);
void printStack(stack * p);
int main(){
    stack stk;
    int n;
    scanf("%d", &n);
    NewStack(&stk);
    for(int i=0; i<n; i++)
    {
        int value;
        scanf("%d", &value);
        pushStack(&stk, value);
    }
    printStack(&stk);
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
void printStack(stack * p){
    for(int i=p->top; i>=0; i--){
        printf("%d ", p->arr[i]);
    }
}