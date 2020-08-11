#include <stdio.h>
int main(int argc, char* argv){
	//The loop invariant in insertion sort is that:
	//for k in 1 to i-1, A[k]>A[k-1]
	int arr[] = {6,5,4,3,2,1};
	int n = 6;
	int i,j,key;
	for(i=1;i<n;i++){
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
