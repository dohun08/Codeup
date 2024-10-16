#include <stdio.h>
int count;
int n, s;
int arr[100000001];

int find1(int start, int end, int value);

int main() {
	scanf("%d %d", &n, &s);
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int num = find1(0, n-1, s);
	printf("%d", num ? num : -1);

	return 0;
}

int find1(int start, int end, int value){
    if(start <= end){
        count++;
        int middle = (start+end)/2;
        if(arr[middle] == value) return middle+1;
        else if(arr[middle] > value) return find1(start, middle-1, value);
        else return find1(middle+1, end, value);
    }
    return 0;
	
}