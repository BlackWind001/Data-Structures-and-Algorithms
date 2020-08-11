#include <stdio.h>
void myInsertionSort(int arr[],int n);
int main(int argc, char* argv){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	myInsertionSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
void myInsertionSort(int arr[],int n){
	int i,j,temp;
	for(int i=0;i<n;i++){
		for(j=i;j-1>=0;j--){
			if(arr[j]<arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1]= temp;
			}
			else{
				break;
			}
		}
	}
}
