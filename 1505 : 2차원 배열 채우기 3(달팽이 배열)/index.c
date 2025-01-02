//for 문 4개 한세트 le(왼끝),re(오른끝),te(위끝),(아래끝)
//예시 프로그램 
#include<stdio.h>
int main(){
	int a[51][51];
	int n;
	scanf("%d", &n);
	int num = 1;
	int le=1, re=n, te=1, be=n;
	while(num <=n*n){
		for(int j=le; j<=re && num<=n*n; j++){ //위
			a[te][j] = num++;
		}
		te++;
		for(int i=te; i<=be && num<=n*n; i++){ //우
			a[i][re] = num++;			
		}
		re--;
		for(int j=re; j>=le && num<=n*n; j--){//하
			a[be][j] = num++;
		}
		be--;
		for(int i=be; i>=te && num<=n*n; i--){//좌
			a[i][le] = num++;		
		}
		le++;
	}
	for(int i=1; i<=n; i++, puts("")){
		for(int j=1; j<=n; j++){
			printf("%d ", a[i][j]);
		}
	}
	return 0;
}
