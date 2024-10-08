#include<stdio.h>
int arr[201][201]={0};
int main(){
	int i, j, k, n, m, num=1;
	scanf("%d %d",&n, &m);
	k=2;//k= i+j의 값
  
	//배열의 인덱스 위치에 값을 저장 코드 작성
	for(k=2; k<=n+m; k++){
		for(i=1; i<=m; i++){
			for(j=1; j<=n; j++){
				if(i+j==k){
					arr[j][i] = num++;
				}
			}
		}
	}
	
	// 배열의 결과를 출력
	for(i=1; i<=n; i++, puts("")){
		for(j=1; j<=m; j++){
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}
