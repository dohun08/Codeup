#include <stdio.h>
typedef struct{
    char name[100];
    int score1;
    int score2;
    int score3;
}student;
int main(){
    student s[101];
    int n;
    scanf("%d", &n);
    int max = 0;
    for(int i=0; i<n; i++){
        scanf("%s %d %d %d", &s[i].name, &s[i].score1, &s[i].score2, &s[i].score3);
        if(max < s[i].score1) max = s[i].score1;
    }
    
    int s2, s3;
    for(int i=0; i<n; i++){
        if(max == s[i].score1){
            printf("%s ", s[i].name);
            s2 = s[i].score2;
            s3 = s[i].score3;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(s[j].score2 < s[j+1].score2){
                student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        if(s[i].score2 == s2){
            printf("%d ", i+1);
            break;
        }

    
    for(int i=0; i<n; i++){

        for(int j=0; j<n-1; j++){
            if(s[j].score3 < s[j+1].score3){
                student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        if(s[i].score3 == s3){
            printf("%d ", i+1);
            break;
        }
    return 0;
}