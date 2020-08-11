import java.util.*;
//Things to remember about loop invariants are
//1) They should satisfy a constant condition by the end of a loop cycle
//2) The condition should be true before the start of the loop
//3) The termination of the loop and the loop invariant together must produce the desired result
class insertionSortLoopInv{
	public static void main(String args[]){
		int arr[] = {5,4,3,2,1};
		int n = arr.length;
		for(int i=1;i<n;i++){
			int key = arr[i];
			int j = i-1;
			while(j>=0 && arr[j]>key){
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = key;
		}
		
		for(int i=0;i<n;i++){
			System.out.print(arr[i]+"\t");
		}
		System.out.println();		
	}
}
