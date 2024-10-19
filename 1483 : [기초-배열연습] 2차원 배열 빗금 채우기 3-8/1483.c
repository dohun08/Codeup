#include<stdio.h>
int arr[201][201]={0};
int main(){
	int i, j, k, n, m, num=1;
	scanf("%d %d",&n, &m);
	k=2;//k= i+j의 값
  
	//배열의 인덱스 위치에 값을 저장 코드 작성
	for(k=n+m; k>=1; k--){
		for(i=1; i<=n; i++){
			for(j=m-1; j>=0; j--){
				if(i+m-j== k){
					arr[i][j] = num++;
				}
			}
		}
	}
	
	// 배열의 결과를 출력
	for(i=1; i<=n; i++, puts("")){
		for(j=0; j<m; j++){
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}
