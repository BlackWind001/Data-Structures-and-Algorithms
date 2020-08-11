import java.util.*;
class myInsertionSort{
	public static void main(String args[]){
		int arr[] = {6,5,4,3,2,1};
		int n = arr.length;
		int temp;
		for(int i=0;i<n;i++){
			System.out.print(arr[i]+"\t");
		}
		System.out.println();
		for(int i=0;i<n;i++){
			for(int j=i;j-1>=0;j--){
				if(arr[j]<arr[j-1]){
					temp = arr[j];
					arr[j]=arr[j-1];
					arr[j-1]=temp;
					for(int k=0;k<n;k++){
						System.out.print(arr[k]+"\t");
					}System.out.println("("+i+" , "+j+")");
				}
				else{
					break;
				}
			}
		}
		for(int i=0;i<n;i++){
			System.out.print(arr[i]+"\t");
		}
		System.out.println();
	}
}

/*
			for(int j=i-1;j>=0;j--){
				if(arr[i]<arr[j]){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					for(int k=0;k<n;k++){
						System.out.print(arr[k]+"\t");
					}
					System.out.println("("+i+" , "+j+")");
				}
				else{
					break;
				}
			}

*/
